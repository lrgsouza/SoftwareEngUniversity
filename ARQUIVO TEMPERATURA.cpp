#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{

	ifstream arq; 	//declarando variavel para arquivo
	char arquivo[100]; //variável para declarar nome do arquivo
	double temp; //variavel para leitura da temperatura
	double media; //variavel auxiliar para calcular media
	float j = 0; //variavel de contador zerada
	
	//zerando variáveis
	media = 0;
	
	//lendo nome do arquivo
	cin.getline(arquivo, 100);

	//abrindo arquivo de texto
	arq.open(arquivo, ifstream::in);

	//lendo temperaturas e somando
	while(!arq.fail())	
	{
		arq >> temp;
		media += temp;
		j++;
	}
	
	//fechando arquivo
	arq.close();	

	//calculando media
	media = media / (j*1.0);

	//mostrando temperatura media
	cout << fixed << setprecision(1);
	cout << "Temperatura media: " << media << " graus" <<endl;



	return 0;
}
