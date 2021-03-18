#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	char primeira[50];  //Variável para escolha da categoria
	char segunda[50]; 	//Variável para escolha da primeira sub-categoria
	char terceira[50];  //Variável para escolha da segunda sub-categoria


	//lendo categoria principal
	cin.getline(primeira, 50);

	//verificando se foi escolhido a categoria "vertebrado"
	if(strcmp(primeira, "vertebrado") == 0)
	{
		//lendo primeira sub-categoria de vertebrado
		cin.getline(segunda, 50);

		//verificando se foi escolhido a sub-categoria "ave"
		if(strcmp(segunda, "ave") == 0)
		{
			//lendo segunda sub-categoria vertebrado
			cin.getline(terceira, 50);

			//mostrando animal conforme a segunda sub-categoria de ave
			if(strcmp(terceira, "carnivoro") == 0)
				cout << "aguia" << endl;
			else if(strcmp(terceira, "onivoro") == 0)
				cout << "pomba" << endl;

		}
		//verificando se foi escolhido a subcategoria "mamifero"
		if (strcmp(segunda, "mamifero") == 0);

		//lendo segunda sub-categoria de mamifero
		cin.getline(terceira, 50);

		//mostrando animal conforme a segunda sub-categoria de mamifero
		if(strcmp(terceira, "onivoro") == 0)
			cout << "homem" << endl;
		else if(strcmp(terceira, "herbivoro") == 0)
			cout << "vaca" << endl;

	}
	//verificando se foi escolhido a categoria "invertebrado"
	else if(strcmp(primeira, "invertebrado") == 0)
	{
		//lendo primeira sub-categoria de invertebrado
		cin.getline(segunda, 50);

		//verificando se foi escolhido a subcategoria "inseto"
		if(strcmp(segunda, "inseto") == 0)
		{
			//lendo segunda sub-categoria de inseto
			cin.getline(terceira, 50);

			//mostrando animal conforme a segunda sub-categoria de inseto
			if(strcmp(terceira, "hematofago") == 0)
				cout << "pulga" << endl;
			else if(strcmp(terceira, "herbivoro") == 0)
				cout << "lagarta" << endl;
		}

		//verificando se foi escolhido a subcategoria "anelidio"
		if (strcmp(segunda, "anelidio") == 0);

		//lendo segunda sub-categoria de anelidio
		cin.getline(terceira, 50);

		//mostrando animal conforme a segunda sub-categoria de anelidio
		if(strcmp(terceira, "hematofago") == 0)
			cout << "sanguessuga" << endl;
		else if(strcmp(terceira, "onivoro") == 0)
			cout << "minhoca" << endl;

	}

	return 0;
}
