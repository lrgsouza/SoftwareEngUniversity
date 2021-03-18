#include <iostream>
using namespace std;

int main()
{
	int i; //contador
	int j = 0; //contador para numeros negativos
	int N; //Variavel entrada da quantidade de vetores

	//lendo quantos vetores teremos
	cin >> N;
	int numero[N]; //armazena N valores

	//lendo valores para armazenamento
	for (i = 0; i < N; i++)
	{
		cin >> numero[i]; //verificando se o numero é negativo
		if(numero[i] < 0)
		{
			numero[i] = 0;//caso negativo definindo valor 0 a ele
			j++;
		}
	}

	//mostrando maior e menor numeros e suas posições
	for (i = 0; i < N; i++)
	{
		cout << numero[i] << " ";
	}
	cout << endl;
	cout  << j << endl;

	return 0;
}
