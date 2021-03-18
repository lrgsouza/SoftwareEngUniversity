#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{

	ofstream arq; 	//declarando variavel para arquivo de saida
	ifstream arqin; 	//declarando variavel para arquivo de entrada
	char arquivo[100]; //variável para declarar nome do arquivo
	double entrada[100]; //variavel para leitura dos numeros reais
	int j = 0; //variavel de contador zerada
	int i = 0; //variavel de contador zerada

	//lendo nome do arquivo para gravação/leitura
	cin.getline(arquivo, 100);

	//lendo numeros inteiros até ser digitado 0
	while(true)
	{

		cin >> entrada[j];
		if(entrada[j] == 0)
			break;
		j++;

	}

	//abrindo arquivo de texto
	arq.open(arquivo, ofstream::out);


	//gravando numeros diferentes de 0 no arquivo
	for(i = 0; i < j; i++)
	{
		if(entrada[i] != 0)
			arq << entrada[i] << endl;

	}


	//fechando arquivo de saida
	arq.close();

	//zerando contadores
	i = 0;
	j = 0;

	//abrindo arquivo de texto
	arqin.open(arquivo, ifstream::in);

	//lendo numeros do arquivo
	while(!arqin.fail())
	{
		arqin >> entrada[j];
		j++;
	}

	//mostrando numeros lidos
	for(i = 0; i < j; i++)
		cout << entrada[i] << " ";

	//fechando arquivo
	arqin.close();


	return 0;
}
