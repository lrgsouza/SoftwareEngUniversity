#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


//fun��o para converter graus Fahrenheit para celcius e Kelvin
void converte(float F, float &C, float &K)
{

	C = (5 * (F - 32)) / 9 ;
	K = C + 273;

}

int main()
{


	float f; //variaveis para entrada da temperatura em graus Fahrenheit
	float resC; //variaveis que recebe o resultado da temperatura em celcius
	float resK; //variaveis que recebe o resultado da temperatura em Kelvin

	cin >> f; //lendo temperatura


	converte(f, resC, resK); //chamando fun��o para converter temperatura

	cout << fixed << setprecision(2); //definindo 2 casas decimais
	cout << "Celsius: "  << resC << endl; //imprimindo resultado da conver��o pra celcius
	cout << "Kelvin: "  << resK << endl; //imprimindo resultado do conver��o pra kelvin


	return 0;
}
