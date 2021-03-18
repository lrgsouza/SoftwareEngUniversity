#include<iostream>
#include <iomanip>
using namespace std;

float media(int notas[], int nAlunos)
{
    int i; // contador
    float media; // calculador da media
    float soma = 0; //auxiliar para calcular a m�dia
    for(i = 0; i < nAlunos; i++)
		soma += notas[i];
		
	media = soma / nAlunos;
	
    return media;
}

int main()
{
    int notas[100]; // armazena as notas
    int nAlunos; // numero de alunos do professor assustador
    int i; // contador
    float medianotas; //para chamar a fun��o da m�dia
    
    // Lendo numero de alunos do professor assustador
    cin >> nAlunos;
    
    // Lendo notas e armazenando
    for(i=0;i<nAlunos;i++)
        cin >> notas[i];
    
    // calculando a m�dia da turma
    medianotas = media(notas,nAlunos);
    
    // Mostrando a media da turma com 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << medianotas <<  endl; 
    
    return 0;
}
