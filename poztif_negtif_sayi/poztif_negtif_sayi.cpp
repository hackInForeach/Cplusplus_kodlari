using namespace std;
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a;

	cout << "GÝRÝLEN SAYININ POZÝTÝF MÝ NEGATÝF MÝ OLDUÐUNU SÖYLEYEN PRG.";
	cout << "\nBir sayý girin: ", cin >> a;
	if (a>=0)
	{
		cout << "Pozitif";
	}
	else
	{
		cout << "Negatif";
	}



	return 0;
}
