#include <iostream>

using namespace std;


int main()
{


	int menor; //menor numero
	int posmenor; //posição do menor
	int maior; //maior numero
	int posmaior; //posição do maior
	int i; //contador
	int N; //Variavel entrada da quantidade de vetores


	//auxiliar para definir menor e maior.
	menor = 99999;
	maior = -99999;

	//lendo quantos vetores teremos
	cin >> N;
	int numero[N]; //armazena N valores

	//lendo entrada de qnt. de usuarios
	for (i = 0; i < N; i++)
	{
		cin >> numero[i];
		if(numero[i] < menor)
		{
			menor = numero[i];
			posmenor = i;
		}
		if(numero[i] > maior)
		{
			maior = numero[i];
			posmaior = i;

		}
	}

	//mostrando maior e menor numeros e suas posições
	cout << "Pos Menor: " << posmenor << endl;
	cout << "Valor Menor: " << menor << endl;
	cout << "Pos Maior: " << posmaior << endl;
	cout << "Valor Maior: " << maior << endl;

	return 0;
}
