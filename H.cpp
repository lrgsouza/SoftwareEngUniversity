#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	double i; //contador
	int N; //variavel de entrada
	double H; // variavel para calcular saida
	double HT; // variavel para calcular saida

	i = 0;
	HT = 0;
	
	//entrando com o valor de N
	cin >> N;
	
	for (i = 1; i <= N; i++)
	{

		H = (1/i);
		HT = HT + H;

	}
		cout << fixed << setprecision(4);
		cout << HT << endl;

	return 0;
}
