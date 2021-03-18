#include<iostream>
#include <iomanip>
using namespace std;

float media(int notas[], int nAlunos)
{
    int i; // contador
    float media; // calculador da media
    float soma = 0; //auxiliar para calcular a média
    for(i = 0; i < nAlunos; i++)
		soma += notas[i];
		
	media = soma / nAlunos;
	
    return media;
}


int nAbaixo(int notas[], int nAlunos, float media)
{
	 int i; // contador
	 int abaixo = 0; // contador para alunos abaixo
	for(i = 0; i < nAlunos; i++){
		if (notas[i]< media)
			abaixo++;
	}
		
	return abaixo;
}

int nAcima(int notas[], int nAlunos, float media)
{
	
	int i; // contador
	int acima = 0; // contador para alunos abaixo
	for(i = 0; i < nAlunos; i++){
		if (notas[i]> media)
			acima++;
	}
		
	return acima;
	
}


int main()
{
    int notas[100]; // armazena as notas
    int nAlunos; // numero de alunos do professor assustador
    int i; // contador
    float medianotas; //para chamar a função da média
    int acimadamedia;
    int abaixodamedia;
    
    // Lendo numero de alunos do professor assustador
    cin >> nAlunos;
    
    // Lendo notas e armazenando
    for(i=0;i<nAlunos;i++)
        cin >> notas[i];
    
    // calculando a média da turma
    medianotas = media(notas,nAlunos);
      
    //verificando alunos acima da média
    acimadamedia = nAcima(notas,nAlunos,medianotas);
    
    //verificando alunos acima da média
    abaixodamedia = nAbaixo(notas,nAlunos,medianotas);
    
    
    // Mostrando a media da turma com 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << medianotas <<  endl; 
	cout << "Alunos com nota abaixo da media: " << abaixodamedia <<  endl; 
    cout << "Alunos com nota acima da media: " << acimadamedia <<  endl; 
    
    return 0;
}
