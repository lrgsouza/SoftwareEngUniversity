#include<iostream>

using namespace std;

struct dados //estrutura para guardar os dados de todos os atletas
{
	char nome[100];
	int n1;
	int n2;
	int n3;
	int n4;
};

int strongest(dados atletas[], int nAtletas) //função para definir o atleta mais forte
{
	int k; //contador
	float soma; // calcular maior nota
	float maior = -1; //soma para calcular a média
	int Maisforte = 0; //salvanto vetor do nome mais forte

	for(k = 0; k < nAtletas; k++)
	{
		soma = atletas[k].n1 + atletas[k].n2 + atletas[k].n3 + atletas[k].n4;

		if(soma > maior){
			maior = soma;
			Maisforte = k; // salvando o lutador mais forte
		} 
			
	}
	return Maisforte;
}


int main()
{
	int nAtletas; // numero de Atletas
	int strong; //variavel para chamar o mais forte
	int i; // contador


	// Lendo numero de atletas
	cin >> nAtletas;
	cin.ignore();

	//definindo atletas na struct
	dados atletas[100];

	// Lendo nomes e notas dos atletas
	for(i = 0; i < nAtletas; i++)
	{
		cin.getline(atletas[i].nome,100);
			cin >> atletas[i].n1;
			cin >> atletas[i].n2;
			cin >> atletas[i].n3;
			cin >> atletas[i].n4;
			cin.ignore();

	}

	// verificando o lutador mais forte
	strong = strongest(atletas, nAtletas);

	// Mostrando o lutador mais forte
	cout << "Vencedor: " << atletas[strong].nome <<  endl;

	return 0;
}
