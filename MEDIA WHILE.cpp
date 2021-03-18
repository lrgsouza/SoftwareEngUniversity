#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double X; //Variavel para entrada do primeiro numero
	double Y; //Variavel para entrada do segundo numero
    int novocalculo = 1; //Variavel para checar se calcula novamente

	//zerando variaveis
	X = -1;
	Y = -1;
	novocalculo = 1;
	
	
    while(novocalculo == 1)
    {
    	
        do{
            cin >> X;
            if(X < 0 || X > 10)
                cout << "nota invalida" << endl;

        }while(X < 0 || X > 10);

        do{
            cin >> Y;
            if(Y < 0 || Y > 10)
                cout << "nota invalida" << endl;

        }while(Y < 0 || Y > 10);

		cout << fixed << setprecision(2);
        cout << "media = " <<  ((X + Y) / 2)  << endl;

        do{
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> novocalculo;

        }while(novocalculo != 1 && novocalculo != 2);
    }

    return 0;
}