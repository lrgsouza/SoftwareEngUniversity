#include <iostream>

using namespace std;


//fun��o para calcular a tabuada
void tabuada(float N)
{
	int T = 0;
	for(int i = 1; i <= 10; i++)
	{

		T = N * i;
		cout << N << " x " << i << " = " << T << endl;

	}

}

int main()
{

	float N; //variavel para receber valor da tabuada

	cin >> N; //lendo numero pra tabuada

	tabuada(N); //chamando fun��o para mostrar tabuada


	return 0;
}
