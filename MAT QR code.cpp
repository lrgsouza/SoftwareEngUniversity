#include <iostream>

using namespace std;


int main()
{

	int mat[3][3]; //matriz inteira
	int i, j; //contadores
	int soma = 0; //auxiliar para validar sexo - 5 para MASCULINO 4 para feminino


	//lendo QR code
	for(i = 0; i < 3; i++)
	{

		for(j = 0; j < 3; j++)
			cin >> mat[i][j];

	}

	//Validando sexo
	for(i = 0; i < 3; i++)
	{

		for(j = 0; j < 3; j++)
			soma += mat[i][j];

	}

	//mostrando sexo
	switch(soma)
	{
	case 5:
		cout << "MASCULINO";
			 break;
	case 4:
		cout << "FEMININO";
			 break;
	default:
		break;
	};



	return 0;
}
