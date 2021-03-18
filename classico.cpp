#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main()
{

	int A,B;
	double R;
	char OP;
	
	
	//INPUT
	cin >> A >> B >> OP;

	
	//PROCESSAMENTO
	
	switch (OP){
		case '/':
			if (B != 0)
				cout << (A*1.0)/(B*1.0) << endl;
			else
			cout << "Impossivel" << endl;
        break;
    
		case '*':		
    	       cout << (A*1.0)*(B*1.0) << endl;
    	break;
    
		case '+':		
    	        cout << (A*1.0)+(B*1.0) << endl;
		break;
			
		case '-':		
    	        cout << (A*1.0)-(B*1.0) << endl;
		break;			
		
	}
	
return 0;
}