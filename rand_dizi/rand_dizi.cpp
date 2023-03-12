#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

int main()

{
	setlocale(LC_ALL, "turkish");
	
	int n, A[999];
	cout << "Eleman sayýsýný girin:";
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		A[i] = rand() % 9;
		cout << "A dizisi: ";
		if (A[i]==3)
		{
			A[i] == 100;
			cout << A[i]<<endl;
		}
		else
		{
			cout << A[i] << endl;
		}
	}

	return 0;
}