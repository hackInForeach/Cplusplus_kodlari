using namespace std;
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a;

	cout << "G�R�LEN SAYININ POZ�T�F M� NEGAT�F M� OLDU�UNU S�YLEYEN PRG.";
	cout << "\nBir say� girin: ", cin >> a;
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
