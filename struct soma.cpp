#include <iostream>

using namespace std;

struct numeros //definindo estrutura de dados dos numeros
{
	int num;
	int X;

};

int main()
{
	int i = 0; //contador
	int soma = 0; //variavel pra soma
	numeros entrada;

	//validando numero maximo de entradas
	do
	{
		cin >> entrada.X;
	}
	while(entrada.X < 0 || entrada.X > 10);

	for(i = 0; i < entrada.X; i++)
	{
		cin >> entrada.num;
		if(entrada.num % 2 == 0)
			soma += entrada.num;
	}

	cout << soma << endl;

	return 0;
}
