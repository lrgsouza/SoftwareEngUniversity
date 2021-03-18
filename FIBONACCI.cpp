#include <iostream>

using namespace std;

int main()
{

	int total; //variavel de entrada para sequencia
	int a; //variavel para iniciar sequencia 0
	int b; //variavel para iniciar sequencia 1
	int auxiliar; //variavel para saida da sequencia


	//numerando variaveis
	a = 0;
	b = 1;

	//entrando com a variavel para total de digitos
	cin >> total;

	cout << a << " ";
	//para entrada com valores > 1;
		while(total > 1)
		{
			cout << b << " ";
			auxiliar = b;
			b = b + a;
			a = auxiliar;
			total--;

		}

	return 0;
}
