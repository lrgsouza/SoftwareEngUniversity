#include <iostream>

using namespace std;


//função para trocar as posições
void troca(int &X, int &Y)
{
	int aux;

	aux = Y;
	Y = X;
	X = aux;

}

int main()
{


	int a; //variaveis para entrada do primeiro valor
	int b; //variaveis para entrada do segundo valor


	cin >> a >> b; //lendo valores

	troca(a, b); //chamando função para trocar

	cout << a << " "  << b << endl; //imprimindo resultado invertido


	return 0;
}
