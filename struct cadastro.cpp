#include <iostream>

using namespace std;

struct cadastro //definindo estrutuda do cadastro
{
	char nome[100];
	char data[100];
	char sexo[100];

};

int main()
{

	cadastro novo; //definindo novo com a estrutura de cadastro

	cin.getline(novo.nome, 100); //entrando com o nome
	cin.getline(novo.data, 100); //entrando com a data
	cin.getline(novo.sexo, 100); //entrando com o sexo

	//mostrando cadastro
	cout << novo.nome << endl;
	cout << novo.data << endl;
	cout << novo.sexo << endl;

	return 0;
}
