using namespace std;
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a;

	cout << "G�R�LEN YA� A G�RE RE��TL��� HESAPLAYAN PRG.";
	cout << "\nYa� gir: ", cin >> a;
	if (a>=18)
	{
		cout << "Re�it";
	}
	else
	{
		cout << "Re�it de�il";
	}



	return 0;
}
