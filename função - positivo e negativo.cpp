#include <iostream>
using namespace std;


//fun��o para verificar sinal
int sinal(int n)
{
	if (n > 0)
		return 1;
	else if (n < 0)
		return -1;
	else
		return 0;	
}

int main()
{
	int N; //variavel para entrada do numero
	int R; //variavel para o retorno da fun��o sinal

	//lendo numero
	cin >> N;
	
	//fun��o para verificar sinal
	R = sinal(N);

	//mostrando peso ideal
	if (R == 0)
	cout << "Zero" << endl;
	if (R == 1)
	cout << "Positivo" << endl;
	if (R == -1)
	cout << "Negativo" << endl;

	return 0;
}
