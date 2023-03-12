#include <stdio.h>
using namespace std;
#include <iostream>

int main()
{
	setlocale(LC_ALL, "turkish");

	int a, b, c;

	cout << "Üç adaet sayı giriniz: " << endl, cin >> a >> b >> c;

	if (a > b && a > c)
	{
		cout << a;
	}
	else if (b > a && b > c)
	{
		cout << b;
	}
	else {
		cout << c;
	}


	return 0;
}
