#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main()
{

	double x,media,valor;
	int i,tudo;


	tudo = 0;
	valor = 0;
	for(i=0;i<6;i++){
		
		cin >> x;
		if(x > 0){
		  tudo += 1;
		  valor += x;

		}
	}

	media = valor / tudo;
        
		

	
		cout << tudo << " valores positivos" << endl;
		cout<<fixed<<setprecision(1);
		cout << media << endl;

		
		
return 0;
}