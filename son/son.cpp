#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "tukish");

	cout << "soru: deðerleri 1-9 arasý rakamlardan random olarak atanarak oluþturulacak n elemanlý bir dizinin |1| elemanlarýndan deðeri 3 olan varsa 12 ile deðiþtirilecek |2|. Yer deðiþtirmelerden sonra oluþacak bu dizinin tek elemanlarýný,|3| çift elemanlarýnýn |4| ve asal elemanlarýnýn sayýsýný |5| bulup sonucu ekrana yazdýran programý tasarlayýnýz a)akýþ  b)satýr  c)c++  ";


	int i, j, a, tk = 0, ct = 0, k = 0;

	cout << "dizi boyutunu gir: ", cin >> a;

	int n[100];// içerisi kaðýtta n[a] olarak yazýlýr

	srand(time(0));

	for (i = 1; i <= a; i++)
	{
		n[i] = rand() % 9;
		if (n[i] == 3)
		{
			n[i] = 12;
		}
	}
	for (i = 1; i <= a; i++)
	{
		if (n[i] % 2 == 1)
		{
			cout << i << ". TEKLER: " << n[i] << endl;
		}
	}
	for (i = 1; i <= a; i++)
	{
		if (n[i] % 2 == 0)
		{
			cout << i << ". CIFTLER: " << n[i] << endl;
		}
	}
	for (i = 1; i <= a; i++)
	{
		for (j = a-1; j > 1; j--)
		{
			if (n[i] % j == 0)
			{
				k = k + 1;
			}
		}
		if (k == 0)
		{
			cout << i << ". ASALLAR: " << n[i] << endl;
		}
		k = 0;
	}



	return 0;
}