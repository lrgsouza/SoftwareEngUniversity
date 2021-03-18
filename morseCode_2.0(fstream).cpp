#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

struct indexSt
{
	char caractere;			//variavel que assume os caracteres de A a Z e 0 a 9.
	char morse[20];		//variavel que grava os caracteres de morse
	char palavra[1000];		//variavel usada para guardar palavras auxiliares na decodificacao
};


void codificar(char entrada[10000], indexSt index[37])
{
	int posicao;	// identifica a posicao do caractere em index para a tradução
	int valor;		// valor do caractere na tabele ASCII
	
	int r = 0;
	// identifica a posicao do caractere no vetor 'caractere'
	while(entrada[r] != '\0')
	{
		valor = (int)entrada[r];

		// se estiver entre 'a' e 'z'
		if(valor >= 97 && valor <= 122)
		{
			posicao = valor - 'a';
			cout << index[posicao].morse;
		}
		// se estiver entre 'A' e 'Z'
		else if(valor >= 65 && valor <= 90)
		{
			posicao = valor - 'A';
			cout << index[posicao].morse;
		}
		// se estiver entre 0 e 9
		else if(valor >= 48 && valor <= 57)
		{
			posicao = valor - '0' + 26;
			cout << index[posicao].morse;
		}
		// se não for um caractere aceito, ele preenche com espaço	
		else
			cout << "/";
		r++;
		cout << " ";
	}
};

void decodificar(char entrada[10000], indexSt index[37])
{
	char *letters; 				//auxiliar para quebrar texto
	char *words; 				//auxiliar para quebrar texto
	//separando as palavras com '/' e copiando para vetor
	words = strtok (entrada, "/");
	int p = 0;
	while (words != NULL)
	{
		strcpy(index[p].palavra, words);
		words = strtok (NULL, "/");
		p++;
	}

	// quebrando as palavras armazenadas em letras
	int q;
	for(q = 0; q < p; q++)
	{
		//separando as palavras com ' '
		letters = strtok (index[q].palavra, " ");

		while (letters != NULL)
		{
			// verifica cada caractere para achar o semelhante
			int l;
			for(l = 0; l <= 35; l++)
			{
				// imprimindo os caracteres correspondentes a letra
				if(strcmp(letters, index[l].morse) == 0)
					cout << index[l].caractere;
			}
			letters = strtok (NULL, " ");
		}
		// imprime espaço depois das palavras, exceto a ultima
		if(q < p - 1)
			cout << " ";
	}
};

void declararValores(indexSt index[37])
{
	//declarando caracteres
	int c;
	for(c = 0; c <= 25; c++)
		index[c].caractere = c + 'a';

	//declarando numeros
	int n;
	for(n = 0; n <= 9; n++)
		index[n + 26].caractere = n + '0';

	//codigo morse de A a Z, de 0 a 9.
	string morsecode[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....",
						  "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.",
						  "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-",
						  "-.--", "--..", "-----", ".----", "..---", "...--", "....-",
						  ".....", "-....", "--...", "---..", "----."
						 };

	//Copiando as strings de morse para os vetores de caracteres
	int m;
	for(m = 0; m <= 35; m++)
		strcpy(index[m].morse, morsecode[m].c_str());
}



int main()
{
	char entrada[10000];			// entrada do texto a ser convertido
	indexSt index[37];
	char tipo[30];
	ifstream arq;

	//declara as variaveis para comparacao entre caracteres
	declararValores(index);

	
	arq.open("dadosc.txt",ifstream::in);
	//lendo procedimento e texto a ser (des)codificado
	arq.getline(tipo, 30);
	arq.getline(entrada, 10000);

	//chama função para codificar o texto
	if(strcmp(tipo, "codificar") == 0)
		codificar(entrada, index);

	//chama função para descodificar o texto
	else if(strcmp(tipo, "decodificar") == 0)
		decodificar(entrada, index);

	return 0;
}
