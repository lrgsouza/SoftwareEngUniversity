#include <iostream>

using namespace std;


int main()
{

	int mat1[10][10]; //matriz inteira 1
	int mat2[10][10]; //matriz inteira 2
	int matsoma[10][10]; //matriz inteira para soma
	int i, j; //contadores
	int L = 0; //n linhas
	int C = 0; //n colunas

	//lendo linhas e colunas
	cin >> L >> C;


	//lendo numeros da matriz 1
	for(i = 0; i < L; i++)
	{

		for(j = 0; j < C; j++)
			cin >> mat1[i][j];

	}


	//lendo numeros da matriz 2
	for(i = 0; i < L; i++)
	{

		for(j = 0; j < C; j++)
			cin >> mat2[i][j];

	}

	//efetuando soma das matrizes
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
			matsoma[i][j] = mat1[i][j] + mat2[i][j];

	}

	//mostrando resultado das somas
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			cout << matsoma[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
