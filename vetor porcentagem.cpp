#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i; //contador
	int N; //Variavel entrada da quantidade de vetores
	int X; //variavel para buscar valores
	double porc; // variavel para calculo da porcentagem
	double auxporc; // contador para calcular a porcentagem

	//lendo quantos vetores teremos com critica de dados
	do
	{
		cin >> N;
		
	}while(N < 0 || N > 50);
		
	int numero[N]; //armazena N valores

	//lendo valores para armazenamento
	for (i = 0; i < N; i++)
	{
		cin >> numero[i]; //lendo numero

	}
	
	//numero a ser encontrado
	cin >> X;
	
	//procurando quantas vezes o numero X foi digitado
	for (i = 0; i < N; i++)
	{
		if(X==numero[i])
			auxporc++;
	}

	porc = (auxporc*100)/N;

	//mostrando a porcentagem com 2 casas decimais
	cout << fixed << setprecision(2);
	cout << porc << endl;


	return 0;
}
