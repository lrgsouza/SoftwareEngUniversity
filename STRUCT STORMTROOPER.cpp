#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct dados //definindo estrutura de dados
{
	int id[100];
	float IM;
	float FA;
	float GA[100];
};

int main()
{
	int i = 0; //contadors
	int aux = 0; //auxiliar para saida
	float Maior = -1; //variavel para definir maior GA
	dados stormT; //definindo varial para salvar dados dos alunos

	//lendo primeira identificação
	cin >> stormT.id[i];

	//validando ID e calculando maior GA
	while(stormT.id[i] != 0)
	{

		cin >> stormT.IM; //lendo indice de maldade
		cin >> stormT.FA; //lendo força de abate
		stormT.GA[i] = (stormT.IM + stormT.FA) / 2; //calculando GA

		//checando qual maior GA.
		if (stormT.GA[i] > Maior)
		{
			Maior = stormT.GA[i];
			aux = i;
		}
		i++;

		//entrando com proximo id
		cin >> stormT.id[i];
	}

	//Mostrando stormtrooper escolhido.
	cout << fixed << setprecision(2);
	cout << "Stormtrooper escolhido: " << stormT.id[aux] << endl;
	cout << "GA = " << Maior << endl;

	return 0;
}
