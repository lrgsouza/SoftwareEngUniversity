#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char primeira[100]; //primeira palavra
	char segunda[100]; //segunda palavra
	char terceira[100]; //terceira palavra
	int a;
	int b;
	int c;

	// parametros estudados para organização
	//-1,-1,1 --> a,b,c
	//-1,1,1 --> a,c,b
	//1,-1,1 --> b,a,c
	//-1,1,-1 --> b,c,a
	//1,-1,-1 --> c,a,b
	//1,1,-1 --> c,b,a



	//lendo as palavras
	cin.getline(primeira, 100);
	cin.getline(segunda, 100);
	cin.getline(terceira, 100);


	//definido valor dos auxiliares para ordenar
	a = strcmp(primeira, segunda);
	b = strcmp(segunda, terceira);
	c = strcmp(terceira, primeira);


	//mostrando palavras digitadas em ordem alfabetica
	if(a < 0 && b < 0 && c > 0)//-1,-1,1 --> a,b,c
	{
		cout << primeira << " " ;
		cout << segunda << " " ;
		cout << terceira << endl;
	}
	if(a < 0 && b > 0 && c > 0)//-1,1,1 --> a,c,b
	{
		cout << primeira << " " ;
		cout << terceira << " " ;
		cout << segunda << endl;
	}
	if(a > 0 && b < 0 && c > 0)//1,-1,1 --> b,a,c
	{
		cout << segunda << " " ;
		cout << primeira << " " ;
		cout << terceira << endl;
	}
	if(a < 0 && b > 0 && c < 0)//-1,1,-1 --> b,c,a
	{
		cout << terceira << " " ;
		cout << primeira << " " ;
		cout << segunda << endl;
	}
	if(a > 0 && b < 0 && c < 0)//1,-1,-1 --> c,a,b
	{
		cout << segunda << " " ;
		cout << terceira << " " ;
		cout << primeira << endl;
	}
	if(a > 0 && b > 0 && c < 0)//1,1,-1 --> c,b,a
	{
		cout << terceira << " " ;
		cout << segunda << " " ;
		cout << primeira << endl;
	}




	return 0;
}
