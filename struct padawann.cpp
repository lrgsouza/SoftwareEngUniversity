#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct dados //definindo estrutura de dados
{
	char nome[100]; //nome do padawann
	float pontos; //pontos do padawann
};

int main()
{
	int i = 0; //contador
	int N; //numero de Padawans
	int Maior = -1; //variavel para definir maior pontuação
	float auxP = 0; //auxiliar para calcular média
	char auxNome[100]; //auxiliar para salvar o nome

	dados padawann; //definindo varial para salvar dados dos padawans

	//lendo quantidade de padawanns
	cin >> N;
	cin.ignore();

	//validando ID e calculando maior GA
	for(i = 0; i < N; i++)
	{

		cin.getline(padawann.nome, 100); //lendo nome do próximo padawan
		cin >> padawann.pontos; //lendo pontuação do padawan
		cin.ignore();

		if (padawann.pontos > Maior) //checando se a pontuação é a maior da turma
		{
			Maior = padawann.pontos; //salvando maior pontuação
			strcpy(auxNome, padawann.nome); //salvando nome do padawan com maior pontuação
		}
		auxP = auxP + Maior; //somando pontuação para calculo da média

	}

	//calculando média da turma
	auxP = auxP / N;

	//Mostrando padawann com mais pontos.
	cout << fixed << setprecision(2);
	cout << "Padawan com mais pontos: " << auxNome << endl;
	cout << "Pontos: " << Maior << endl;
	cout << "Media da turma: " << auxP*1.0 << " pontos" << endl;

	return 0;
}
