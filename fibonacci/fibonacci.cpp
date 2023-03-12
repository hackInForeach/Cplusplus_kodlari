#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int i, a1 = 1, a2 = 1, a3, tk = 2, ct = 0;
	//cout << a1 << endl << a2 << endl;
	for (i = 3; i <= 10; i++)
	{
		a3 = a2 + a1;
		a1 = a2;
		a2 = a3;
		//cout<<a3;
		if (a3 % 2 == 0)
		{
			ct++;
		}
		else
		{
			tk++;
		}
	}
	cout << "Fibonaccinin tek sayý adedi= " << tk 
		<< "\nFibonaccinin tek sayý adedi= " << ct;
	return 0;
}
