using namespace std;
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a;

	cout << "GÝRÝLEN YAÞ A GÖRE REÞÝTLÝÐÝ HESAPLAYAN PRG.";
	cout << "\nYaþ gir: ", cin >> a;
	if (a>=18)
	{
		cout << "Reþit";
	}
	else
	{
		cout << "Reþit deðil";
	}



	return 0;
}
