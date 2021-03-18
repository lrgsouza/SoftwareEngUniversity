#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i; //contador
	int N; //Variavel entrada da quantidade de vetores
	double media = 0; //variavel para calculo da média
	double auxmedia = 0; //auxiliar para média


	//lendo quantos vetores teremos
	cin >> N;
	int numero[N]; //armazena N valores

	//lendo valores para armazenamento
	for (i = 0; i < N; i++)
	{
		cin >> numero[i];

		//somando valores
		auxmedia += numero[i];

	}
	
	//calculando a média
	media = auxmedia / N;

	//mostrando a media com 2 casas decimais
	cout << fixed << setprecision(2);
	cout << "Media: " << media << endl;

	//mostrando numeros maiores que a media
	cout << "Maiores que a media: ";
	for (i = 0; i < N; i++)
	{
		if(numero[i] > media)
			cout << numero[i] << " ";
	}

	cout << endl;
	return 0;
}
