#include<iostream>
#include<cmath>
using namespace std;

float calc_delta(float a, float b, float c) //fun��o para calcular delta
{
	float delta;

	delta = pow(b, 2) - 4 * (a * c);

	return delta;
}


int main()
{
	int a, b, c; //declarando variaveis para calculo de delta
	int delta; //variavel para calcular delta

	//lendo variaveis de delta A, B e C
	cin >> a >> b >> c;

	//usando fun��o para definir valor de delta
	delta = calc_delta(a, b, c);

	//mostrando delta calculada
	cout << "delta = " << delta << endl;


	return 0;
}
