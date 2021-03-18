#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int D,M,A,DELTA,GX,FX,N,DS;
    double F,G;
    
	// GX = int(365.25*g)
	// FY = int(30.6*f)

    // ENTRADAS
    cin >> D >> M >> A;

	//FORMULAS 1 (DEFINE G e F)	
	if	(M <= 2){
		G = A -1;
		F = M + 13;
	}
	else{
		G = A;
		F = M+1;
	}

	//FORMULAS 2
	GX = 365.25 * G;
	FX = 30.6 * F;	
	N = GX + FX - 621049 + D;
	
	
		//DELTA	
	if (N < 36523)
		DELTA = 2;
	if (N < 73048 && N >= 36523)
		DELTA = 1;
	if (N >= 73048)
		DELTA = 0;
		
	

	DS = (N % 7) + DELTA + 1;

	switch (DS) {
		case (1):
		cout << "domingo" << endl;
		break;
		case (2):
		cout << "segunda-feira" << endl;
		break;		
		case (3):
		cout << "terca-feira" << endl;
		break;	
		case (4):
		cout << "quarta-feira" << endl;
		break;	
		case (5):
		cout << "quinta-feira" << endl;
		break;	
		case (6):
		cout << "sexta-feita" << endl;
		break;
		case (7):
		cout << "sabado" << endl;
		break;
	} 
	return 0;
}