#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int L,C,R1,R2;
	int SOMA,MAIOR;
	double HIPOTENUSA;

	
    // ENTRADAS
    cin >> L >> C >> R1 >> R2;
    
    HIPOTENUSA = sqrt((L*L) + (C*C));
    
    if (R1 > R2) 
    	MAIOR = R1;
    else 
    	MAIOR = R2;

	SOMA = (2 * R1) + (2 * R2);
	
	
	if (SOMA <= L && SOMA <= C)
		cout << "S" << endl;
	
	else if ((2 * MAIOR) > L || (2 * MAIOR) > C )
  		cout << "N" << endl;

	else if (SOMA <= L && (2 * MAIOR) <= C)
		cout << "S" << endl;
		   
	else if (SOMA <= C && (2 * MAIOR) <= L)
		cout << "S" << endl;
		
	else if	(SOMA < HIPOTENUSA - 1)
		cout << "S" << endl;
	else{		
		cout << "N" << endl;
	}
   


	return 0;
}