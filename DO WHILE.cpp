#include<iostream>
using namespace std;

int main()
{
	int X; //variavel para entrada da nota
	int soma;

	//lendo nota
	soma =0;
	cin >> X;

		do
		{
		if (X < 7)
			soma++;
			cin >> X;
		}
		while(X > 0);
		
		cout << soma << endl;

	return 0;
}
