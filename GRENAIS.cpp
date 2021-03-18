#include <iostream>

using namespace std;

int main()
{

	int novogrenal; //Variavel para checar se calcula novamente
	int gremio;
	int gremiofinal;
	int inter;
	int interfinal;
	int grenal;
	int empate;


	//zerando variaveis
	novogrenal = 1;
	gremiofinal = 0;
	interfinal = 0;
	grenal = 0;
	empate = 0;

	while(novogrenal == 1)
	{
		grenal++;
		cin >> inter;
		cin >> gremio;

		if (inter > gremio)
		{
			interfinal++;
		}
		else if (gremio > inter)
		{
			gremiofinal++;
		}
		else if (gremio == inter)
		{
			empate++;
		}
		//chama novo processo
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> novogrenal;
	}

	//saidas
	cout << grenal << " grenais" << endl;
	cout << "Inter:" << interfinal << endl;
	cout << "Gremio:" << gremiofinal << endl;
	cout << "Empates:" << empate << endl;
	if (gremiofinal > interfinal)
		cout << "Gremio venceu mais" << endl;
	else
	{
		cout << "Inter venceu mais" << endl;
	}

	return 0;
}
