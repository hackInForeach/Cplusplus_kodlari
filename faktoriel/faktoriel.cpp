#include <stdio.h>
using namespace std;
#include <iostream>

int main()
{
	setlocale(LC_ALL, "turkish");

	int i,a=1,b;
	cout << "Bir sayý girin: "<< endl, cin >> b;

	for (i = 1; i <=b; i++)
	{
		a = a * i;
	}
	cout << a << endl;



	return 0;
}