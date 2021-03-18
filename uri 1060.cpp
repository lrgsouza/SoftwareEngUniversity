#include <iostream>
// #include <cmath>
// #include<iomanip>
using namespace std;

int main()
{

	double x;
	int i, tudo;


	
	tudo = 0;
	for(i=0;i<6;i++){
		
		cin >> x;
		
		if(x == 0){
			tudo = tudo;
		}
		else 
		if(x > 0){
		  tudo = tudo + 1;
		}
	}


		cout << tudo << " valores positivos" << endl;

return 0;
}