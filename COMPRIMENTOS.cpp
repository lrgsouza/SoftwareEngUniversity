#include <iostream>

using namespace std;

int main()
{
	int I; //assume menor valor de entrada
	int J; //assume maior valor de entrada
	int MI; //entrada primeiro valor
	int MJ; //entrada segundo valor
	int Maior; //variavel para guardar o Maior comprimento
	int comp; //contator comprimento
	int X; //assume cada digito entre o primeiro e segundo digito
	int porco; //auxiliar para calcular comprimento até chegar em 1

	Maior = 0;

	//entradas
	cin >> MI >> MJ;

	//definido qual entrada é maior.
	if (MI > MJ)
	{
		I = MJ;
		J = MI;
	}
	else
	{
		I = MI;
		J = MJ;
	}

	//calculo de comprimento de numeros entre I a J.
	for(X = I; X <= J; X++)
	{
		porco = X;
		comp = 1;
		while(porco > 1)
		{
			if(porco % 2 == 0)
				porco =	porco / 2;
			else if (porco % 2 != 0)
				porco =	(porco * 3) + 1;
			comp++;
		}

		//define maior comprimento
		if(comp > Maior)
			Maior = comp;
	}


	cout << MI << " " << MJ << " " << Maior << endl ;

	return 0;
}
