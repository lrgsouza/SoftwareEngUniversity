#include <iostream>

using namespace std;


int main()
{

	int mat[10][10]; //matriz inteira
	int i, j; //contadores
	int L = 0; //n linhas
	int C = 0; //n colunas


	//lendo linhas e colunas
	cin >> L >> C;


	//lendo numeros da matriz
	for(i = 0; i < L; i++)
	{

		for(j = 0; j < C; j++)
			cin >> mat[i][j];

	}
	
	//mostrando numeros da matriz
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
