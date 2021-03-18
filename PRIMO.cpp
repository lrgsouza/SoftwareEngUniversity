#include <iostream>

using namespace std;

int main()
{

	int i; //contador e auxiliar de divisão 
	int x; //variavel de entrada
	int div; // variavel para verificar se o nuemro é divisivel

	div = 0;
	cin >> x;
	for (i = 1; i <= x; i++)
	{
		//verifica se foi dividido.
		if (x % i == 0)
		{
			div++;
		}
	}

	if (div == 2)
		cout << "primo" << endl;
	else
		cout << "nao e primo" << endl;

	return 0;
}
