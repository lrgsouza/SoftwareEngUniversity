#include <iostream>
#include <iomanip>

using namespace std;

struct cadastro //definindo estrutuda do cadastro
{
	char nome[50];
	int matricula;
	double nota;

};

int main()
{
	int N; //definindo numero de pessoas
	int J; //para buscar cadastro
	int i; //contador
	double menor = 99999; //variavel para definir menor nota
	int auxmenor = -1; //auxiliar para salvar index da menor nota
	double media; //variavel para calculo da média
	double soma = 0; //auxilar para calcular média

	//lendo entradas iniciais
	cin >> N;
	cin >> J;
	J -= 1;
	cin.ignore();

	cadastro aluno[N]; //definindo aluno com a estrutura do cadastro.

	for(i = 0; i < N; i++)//cadastrando alunos
	{

		cin.getline(aluno[i].nome, 50);//lendo nome
		cin >> aluno[i].matricula;//lendo matricula
		cin >> aluno[i].nota;//lendo nota
		cin.ignore();
		if (aluno[i].nota < menor)//checando menor nota
		{
			menor = aluno[i].nota; //definindo nova menor nota
			auxmenor = i; //salvando index do vetor no auxiliar
		}
		soma += aluno[i].nota; 

	}
	
	//calculando média
	media = soma / N;

	//definindo duas casas decimais
	cout << fixed << setprecision(2);
	//mostrando media
	cout << "Media: " << media << endl;
	//mostrando aluno com menor nota
	cout << aluno[auxmenor].nome << endl;
	//mostrnado dados do aluno J
	cout << aluno[J].nome << " " << aluno[J].matricula << " " << aluno[J].nota << endl;

	return 0;
}
