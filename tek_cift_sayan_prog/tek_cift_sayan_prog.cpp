#include <stdio.h>
using namespace std;
#include <iostream>

int main()
{
	setlocale(LC_ALL, "turkish");

	int i, a, b, c;

	for (i = 1; i <= 10; i++)
	{
		cout << i <<"sayi gir: ", cin >> a;
		if (a % 2 == 0)
		{
			b = 1 + a;
		}
		else
		{
			c = 1 + a;
		}
	}
	cout << "Teklerin toplamý: " << b << endl;
	cout << "Çiftlerin toplamý: " << c << endl;



	return 0;
}