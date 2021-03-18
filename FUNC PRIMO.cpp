#include <iostream>

using namespace std;


int primo(int N)
{
	int i; //contador e auxiliar de divisão
	int div = 0; //contador para definir primo

	for (i = 1; i <= N; i++)
	{
		//verifica se foi dividido.
		if (N % i == 0)
		{
			div++; //caso for dividido soma 1.
		}
	}
	if (div == 2)
		return 0; //caso seja divisivel somente por 1 e ele mesmo = 2 (é primo)
	else
		return 1; //caso seja divisivel por mais de 2 numeros (não é primo)

}


int main()
{


	int N; //variavel de entrada
	int prim; // variavel para verificar se o nuemro é divisivel

	cin >> N; //lendo numero a ser checado
	prim = primo(N); //chamando função para verificar se é ou não primo


	switch(prim) //imprimindo resultado
	{
	case 0:
		cout << "Primo" << endl;
		break;
	case 1:
		cout << "Not" << endl;
		break;
	default:
		break;
	}

	return 0;
}
