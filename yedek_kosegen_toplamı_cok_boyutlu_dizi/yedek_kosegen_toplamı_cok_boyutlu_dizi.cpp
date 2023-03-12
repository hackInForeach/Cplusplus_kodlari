#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iterator>

using namespace std;

int main()

{
	setlocale(LC_ALL, "turkish");

	int A[3][3];
	int t=0;

	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{

			A[i][j] = rand() % 9;
			if (i==j)
			{
				t = t + A[i][j];
			}
		}
	}
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			cout << "A[" << i << "][" << j << "]=" << A[i][j] << endl;
		}
	}
	cout << "Ana köşegenlerin toplamı " << t;

	return 0;
}