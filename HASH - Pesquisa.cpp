#include <iostream>

using namespace std;

struct dado //struct para salvar dados
{
	int k;
	int status;
};

int hash_aux(int k, int m) //função hash auxiliar
{
	int hash; //auxiliar para calculo do hash

	hash = k % m; //calculando hash

	//somando M caso calculo de negativo
	if(hash < 0)
		hash = hash + m;

	//retornando valor de hash para função hash
	return hash;
}

int hash(int k, int i, int m) //função hash sondagem linear
{
	int pos_; //variavel auxiliar

	//chamando função auxiliar
	pos_ = (hash_aux(k, m) + i) % m;

	//retornando valor de hash de songadem linear
	return pos_;
}

int hash_insert(dado T[], int k, int m) //função para insersão de dados
{
	int i; //contator auxiliar
	int j; //auxiliar para sondagem linear

	//zerando contador
	i = 0;

	//inserindo dados no struct
	do
	{
		j = hash(k, i, m); //sondagem linear

		if (T[j].status != 1) //salva o valor de k na chave caso
		{
			T[j].k = k;
			T[j].status = 1;
			return j;
		}
		else
			i++;
	}
	while(i != m);
	return -1;

}

int hash_search(dado T[], int k, int m) //função para busca de dados
{
	int i; //contator auxiliar
	int f; //auxiliar para sondagem linear

	//zerando contador
	i = 0;
	do
	{
		f = hash(k, i, m);

		if (T[f].k == k)
			return f;

		i++;
	}
	while (T[f].status != 0 || i < m);
	return -1;
}

void Clean(dado T[], int m) //função para inserir status e chaves default
{
	for (int x = 0; x < m; x++)
	{
		T[x].status = 0;
		T[x].k = -1;
	}
}

int main ()
{
	int k; //variável para receber valor da chave
	int m; //variavel para receber tamanho do vetor
	int c; //contador para saida
	dado T[100]; //vetor de struct com a chave e o status
	int s;
	int find; //auxiliar para busca

	//lendo tamanho do vetor
	cin >> m;
	//lendo preira chave
	cin >> k;

	//inserindo -1 em todas as posições
	Clean(T, m);

	//inserindo chaves até ser digitado o numero 0
	while(k != 0)
	{
		//função para inserção
		hash_insert(T, k, m);
		//lendo demais chaves
		cin >> k;
	}
	
	//lendo chave a ser procurada
	cin >> s;
	
	//buscando chave
	find = hash_search(T, s, m);

	//mostrando resultado
	if(find != -1)
		cout << "Chave " << s << " encontrada na posicao " << find << endl;
	else
		cout << "Chave " << s << " nao encontrada" << endl;

	return 0;
}
