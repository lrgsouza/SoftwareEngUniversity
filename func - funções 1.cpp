#include<iostream>
#include<cmath>
using namespace std;

int calc_a(int x)
{
	int a;
	a = 2*pow(x, 2) + (3 * x) - 1;

	return a;
}

int calc_b(int x)
{
	int b;
	b = pow(x, 3);
	
	return b;
}

int calc_c(int y)
{
	int c;
	c = pow(y, 3);
	
	return c;
}

int main()
{
	int a, b, c, x, y; //declarando variaveis para entradas e calculo

	//lendo entradas
	cin >> x >> y;

	//usando função para calculo de A
	a = calc_a(x);
	cout << "a = " << a << endl;

	//usando função para calculo de B
	b = calc_b(x);
	cout << "b = " << b << endl;

	//usando função para calculo de C
	c = calc_c(y);
	cout<< "c = "  << c << endl;
	
	
	
	return 0;
}
