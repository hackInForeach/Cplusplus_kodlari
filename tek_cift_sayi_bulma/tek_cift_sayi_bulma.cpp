using namespace std;
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int a;
	cout << "G�R�LEN SAYININ TEK M� ��FT M� OLDU�UNU BULAN PRG.";
	cout << "\nBir say� gir: ", cin >> a;
	if (a%2==0)
	{
		cout << "Sayi �ift";
	}
	else
	{
		cout << "Sayi tek";
	}


	return 0;
}
