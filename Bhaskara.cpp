#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main()
{
    float A, B, C, delta,
          X1, X2;


    cin >> A >> B >> C;

    if(A != 0){
        delta = (B*B) - (4*A*C);

        if(delta<0){
            cout <<"impossivel"<<endl;;
        }
        else {
            X1=(-B + sqrt(delta))/(2*A);
            X2=(-B - sqrt(delta))/(2*A);
            cout<<fixed<<setprecision(5);
            cout << "X1 = "<<X1<<endl;
            cout << "X2 = "<<X2<<endl;
        }
    }
	else{
        cout <<"impossivel";
    }
return 0;
}

