#include<iostream>
using namespace std;

int maisVelha(int idades[], int nPessoas)
{
    int i; // contador
    int maiorIdade = -1; // idade da pessoa mais velha
    for(i = 0; i < nPessoas; i++)
        if(idades[i] > maiorIdade)
            maiorIdade = idades[i];
    return maiorIdade;
}

int main()
{
    int idades[100]; // armazena as idades
    int nPessoas; // numero de pessoas a serem consultadas
    int i; // contador
    int idosa; // idade da pessoa mais velha
    
    // Lendo numero de pessoas a serem consultadas
    cin >> nPessoas;
    
    // Lendo idades e armazenando-as no vetor
    for(i=0;i<nPessoas;i++)
        cin >> idades[i];
    
    // Verificando a idade da pessoa mais velha
    idosa = maisVelha(idades,nPessoas);
    
    // Mostrando a idade da pessoa mais velha
    cout << "A pessoa mais velha tem " << idosa << " anos" << endl; 
    
    return 0;
}
