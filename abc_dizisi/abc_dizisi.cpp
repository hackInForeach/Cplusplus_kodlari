#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "turkish");
	int s;
	int A[4], B[4], C[4];
	cout << "A dizisinin Eleman Sayýsýný Gir : "<<endl;
	for (int i = 0; i < 4; i++)
	{
		cin >> s;
		A[i] = s;
	}cout << "A dizisi"<<endl;
	for (int i = 0; i < 4; i++)
	{
		cout << A[i]<<endl;
	}
	cout << endl << "B dizisinin elemanlarýný gýrýnýz: " << endl;
	for (int i = 0; i < 4; i++)
	{
		cin >> s;
		B[i] = s;
	}cout << "B dizisi"<<endl;
	for (int i = 0; i < 4; i++)
	{
		cout << B[i]<<endl;
	}for (int i = 0; i < 4; i++)
	{
		C[i] = A[i] + B[i];
	}
	cout << endl << "C dizisi"<<endl;
	for (int i = 0; i < 4; i++)
	{
		cout << C[i]<<endl;
	}

	return 0;
}