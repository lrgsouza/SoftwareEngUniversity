#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


//fun��o para calcular as raizes
void media(int x, int y, float &m)
{
	m = sqrt(x * y);

}

	int main()
{


	int x, y; //variaveis para entrada dos parametros da media
	float res; //variaveis que recebe o resultado da m�dia


	cin >> x >> y; //lendo parametros para efetuar o calculo


	media(x, y, res); //chamando fun��o da m�dia geom�trica

	cout << fixed << setprecision(2); //definindo 2 casas decimais
	cout << "Media: "  << res << endl; //imprimindo resultado do calculo



	return 0;
}
