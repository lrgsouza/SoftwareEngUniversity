#include <iostream>
#include <iomanip>
using namespace std;


//função para calcular a exponencial
double exponencial(double X, double Y)
{
	double E = X;
	
	if(Y==0)
		return 1;

	for (int i = 1; i < Y; i++)
	{
		E = E * X;
	}
		 return E;
}

int main()
{

	double X; //variavel para receber primeiro numero
	double Y; //variavel para receber segundo numero
	double Expo; //variavel para receber valor da exponencial

	cin >> X >> Y; //lendo numeros

	Expo = exponencial(X, Y); //chamando função para calcular a exponencial
	
	cout << fixed << setprecision(0) << Expo << endl; 	  //imprimindo resultado


	return 0;
}
