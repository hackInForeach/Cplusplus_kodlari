using namespace std;
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int a;
	cout << "GÝRÝLEN SAYININ TEK MÝ ÇÝFT MÝ OLDUÐUNU BULAN PRG.";
	cout << "\nBir sayý gir: ", cin >> a;
	if (a%2==0)
	{
		cout << "Sayi çift";
	}
	else
	{
		cout << "Sayi tek";
	}


	return 0;
}
