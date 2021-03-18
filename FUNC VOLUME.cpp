#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


//função para calcular ao volume
float calc_volume(float R)
{

	float V;
	V = 4.0 / 3.0 * 3.14 * pow(R, 3);

	return V;
}

int main()
{

	float R; //variavel para receber valor do raio
	float V; //variavel para receber valor do volume

	cin >> R; //lendo raio

	V = calc_volume(R); //chamando função para calcular o volume

	cout << fixed << setprecision(2); //Mostrando 2 casas decimais
	cout << V << endl; 				  //imprimindo volume


	return 0;
}
