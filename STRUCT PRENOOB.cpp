#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct dados //definindo estrutura de dados
{

	int matricula;
	float notaum;
	float notadois;

};

int main()
{

	dados aluno; //definindo varial para salvar dados dos alunos

	cout << "Digite o seu numero de matricula:" << endl;
	cin >> aluno.matricula; //lendo matricula do aluno


	cout << "Digite a nota da primeira prova:" << endl;
	cin >> aluno.notaum; //lendo nota da primeira prova


	cout << "Digite a nota da segunda prova:" << endl;
	cin >> aluno.notadois; //lendo nota da segunda prova



	//mostrando dados cadastrados
	cout << fixed << setprecision(2);
	cout << "Matricula do aluno: " << aluno.matricula << endl;
	cout << "Nota da primeira prova: " << aluno.notaum << endl;
	cout << "Nota da segunda prova: " << aluno.notadois << endl;

	return 0;
}
