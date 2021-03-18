#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


//função para calcular as raizes
int calc_raizes(float a, float b, float c, float &x1, float &x2)
{
	float var = 0;

	if ((b * b) - (4 * a * c)  < 0 ) //validando se possue raizes.
	{

		return 1;
	}
	else
	{

		x1 = (-b + (sqrt((b * b) - (4 * a * c)))) / (2 * a );
		x2 = (-b - (sqrt((b * b) - (4 * a * c)))) / (2 * a );

		if(x1 > x2)
		{
			var = x2;
			x2 = x1;
			x1 = var;
		}

		return 0;
	}

}

int main()
{


	float a, b, c; //variaveis para entrada dos parametros da equação
	float resX1, resX2; //variaveis que recebem os valores das raizes
	float check; //variavel para verificar retorno função

	//lendo os parametros das raizes
	do
	{
		cin >> a;
	}
	while(a == 0); //critica de dados para a não ser 0
	cin >> b >> c; //lendo parametros b e c


	check = calc_raizes(a, b, c, resX1, resX2); //chamando função da equação
	cout << fixed << setprecision(2); //definindo 2 casas decimais

	if(check == 1)
		cout << "Nao ha raizes reais" << endl; //mostrando que não há raizes reais


	else
	{

		if(resX1 == 0 && resX2 == 0 ) //mostrando quando as duas raizes são 0
		{
			cout << "x = 0"  << endl;
			return 0;
		}

		else //mostrando raizes
		{
			cout << "x1 = " << resX1 << endl;
			cout << "x2 = " << resX2 << endl;
		}

	}

	return 0;
}
