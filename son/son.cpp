#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "tukish");

	cout << "soru: de�erleri 1-9 aras� rakamlardan random olarak atanarak olu�turulacak n elemanl� bir dizinin |1| elemanlar�ndan de�eri 3 olan varsa 12 ile de�i�tirilecek |2|. Yer de�i�tirmelerden sonra olu�acak bu dizinin tek elemanlar�n�,|3| �ift elemanlar�n�n |4| ve asal elemanlar�n�n say�s�n� |5| bulup sonucu ekrana yazd�ran program� tasarlay�n�z a)ak��  b)sat�r  c)c++  ";


	int i, j, a, tk = 0, ct = 0, k = 0;

	cout << "dizi boyutunu gir: ", cin >> a;

	int n[100];// i�erisi ka��tta n[a] olarak yaz�l�r

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