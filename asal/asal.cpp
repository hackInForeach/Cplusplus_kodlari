#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int i, a, b = 0;

	setlocale(LC_ALL, "turkish");

	cout << "bir say� girin: ", cin >> a;
	for (i = 2; i < a; i++) // asal yan�n tam b�l�nen k�s�mlar� al�n�p a�a��daki break komutunda e�itlik s�f�rda bukunur
	{
		if (i % a == 0)
		{
			b = b + 1; 
			break;     // i�lemi k�saltmak i�in yap�lan kesme i�lemi
		}
	}
	if (b == 0)
	{
		cout << "Girilen " << a << " say�s� asal";
	}
	else
	{
		cout << "Girilen " << a << " say�s� asal de�il";
	}


	return 0;
}

