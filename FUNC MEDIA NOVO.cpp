#include <iostream>
#include <iomanip>

using namespace std;


//fun��o para calcular a m�dia
float calc_media(float N1, float N2, float &M)
{

	M = (N1 + N2) / 2;

	return 0;
}

int main()
{

	float N1; //variavel para receber primeira nota
	float N2; //variavel para receber segunda nota
	float M; //variavel para receber valor da m�dia

	cin >> N1 >> N2; //lendo notas

	calc_media(N1, N2, M); //chamando fun��o para calcular a m�dia

	cout << fixed << setprecision(1); //Mostrando 1 casas decimais
	cout << M << endl; 				  //imprimindo m�dia


	return 0;
}
