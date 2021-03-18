#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


//função para calcular as raizes
void media(int x, int y, float &m)
{
	m = sqrt(x * y);

}

	int main()
{


	int x, y; //variaveis para entrada dos parametros da media
	float res; //variaveis que recebe o resultado da média


	cin >> x >> y; //lendo parametros para efetuar o calculo


	media(x, y, res); //chamando função da média geométrica

	cout << fixed << setprecision(2); //definindo 2 casas decimais
	cout << "Media: "  << res << endl; //imprimindo resultado do calculo



	return 0;
}
