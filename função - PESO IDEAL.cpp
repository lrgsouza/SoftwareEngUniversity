#include <iostream>
#include <iomanip>

using namespace std;


//função para calcular peso ideal
float ideal(float h, char sexo)
{
	float pesoid;

	if (sexo == 'M')
		pesoid = (72.7 * h) - 58;

	else if (sexo == 'F')
		pesoid = (62.1 * h) - 44.7;

	return pesoid;
}



int main()
{
	float A; //variaveis de entrada para altura
	char S; //variaveis de entrada para sexo	
	float pesoideal; //variavel para calcular peso ideal usando função

	//lendo altura
	cin >> A;
	
	cin.ignore();
	
	//lendo sexo
	cin >> S;

	//usando função para definir peso ideal
	pesoideal = ideal(A, S);

	//mostrando peso ideal
	cout << fixed << setprecision(2);
	cout << "Peso ideal = " << pesoideal << " kg" << endl;


	return 0;
}
