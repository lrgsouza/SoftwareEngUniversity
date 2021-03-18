#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

	double i; //contador
	float N1; //variavel de entrada de variação 1
	float N2; //variavel de entrada de variação 2
	float maior = -99999; //variavel para definir onde param os positivos
	float menor = 99999; //variavel para definir onde iniciam os positivos
	float result;


	//entrando com o valores
	cin >> N1 >> N2;

	for (i = N1; i <= N2; i += 0.1)
	{

		//calculando
		result = sin(N1) * (cos(N1));

		//definindo inicio e fim dos positivos.
		if (result > 0)
		{
			if (N1 > maior)
				maior = N1;
			if (N1 < menor)
				menor = N1;

		}

		//somando 0.1 ao radiano anterior
		N1 += 0.1;

	}
	cout << fixed << setprecision(1);
	cout << menor << " a " << maior << endl;

	return 0;
}
