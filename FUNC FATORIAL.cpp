#include <iostream>
#include <iomanip>
using namespace std;


//função para calcular a fatorial
void fatorial(int X, int &F)
{
	F = X;
	if(F==0)
		return;
	for (int i = X - 1; i > 0; i--)
	{
		F = F * (i);
	}

}

int main()
{

	int X; //variavel para receber numero
	int Fat; //variavel para receber valor da fatorial por referencia

	cin >> X; //lendo numero

	fatorial(X, Fat); //chamando função para calcular a fatorial

	cout << fixed << setprecision(0) << Fat << endl; //imprimindo resultado


	return 0;
}
