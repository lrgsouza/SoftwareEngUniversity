#include <iostream>
#include <cstring>

using namespace std;


int main()
{

	char cesar[10][10]; //matriz inteira 1
	char entry[100];
	int i, j; //contadores
	int L = 0; //n linhas
	int C = 0; //n colunas
	int len;

	//lendo linhas e colunas
	cin >> L >> C;
	cin.ignore();

	cin.getline(entry,100);
	
		len = 0;

	//lendo numeros da matriz 1
	for(i = 0; i < L; i++)
	{

		for(j = 0; j < C; j++){
			
			cesar[i][j] = entry[len];
			len++;
		}

	}


	//mostrando resultado das somas
	for(i = 0; i < C; i++)
	{
		for(j = 0; j < L; j++)
		{
			cout << cesar[j][i];
		}

	}
		cout << endl;
	return 0;
}
