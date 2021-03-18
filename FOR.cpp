#include <iostream>
// #include <cmath>
// #include<iomanip>
using namespace std;

int main()
{

	int i,n,x,soma;
	float media;
	
	
	
	
	
	
	
	cin >> n;
	
	
	soma = 0;
	for(i=0;i<n;i++){
		cin >> x;
		soma = (float)soma+x ;
		
	}
	media = (float)soma / n;
	
		cout << "soma = " << soma << endl;
		cout << "media = " << media << endl;	
	
return 0;
}