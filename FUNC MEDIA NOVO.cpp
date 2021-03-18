#include <iostream>
#include <iomanip>

using namespace std;


//função para calcular a média
float calc_media(float N1, float N2, float &M)
{

	M = (N1 + N2) / 2;

	return 0;
}

int main()
{

	float N1; //variavel para receber primeira nota
	float N2; //variavel para receber segunda nota
	float M; //variavel para receber valor da média

	cin >> N1 >> N2; //lendo notas

	calc_media(N1, N2, M); //chamando função para calcular a média

	cout << fixed << setprecision(1); //Mostrando 1 casas decimais
	cout << M << endl; 				  //imprimindo média


	return 0;
}
