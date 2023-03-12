#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "turkish");
	srand(time(0));
	/*
	cout << "dizi oluþturulmasý";
	int a, i, A[10], B[10], C[10], n;

		cout << "dizi boyutu: ", cin >> n;
		for (i = 1; i <= n; i++)
		{
			cout << i << ". A indexs: ", cin >> a;
			A[i] = a;
			cout << i << ". B indeks: ", cin >> a;
			B[i] = a;
			C[i] = A[i] + B[i];
		}
		for (i = 1; i <= n; i++)
		{
			cout << i << ". C indexs: " << C[i] << endl;
		}

	*/
	/*

	int A[30][30], B[30][30], a, C[30][30], i, j;
	int n;
	cout << "gir: ", cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << i << "-" << j << " (A) gir: ", cin >> a;
			A[i][j] = a;
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << i << "-" << j << " (B) gir: ", cin >> a;
			B[i][j] = a;
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
			cout << i << "-" << j  << "(C) sonuc: " << C[i][j] << endl;
		}
	}

	*/

	/*
		int n, tp = 0, nt, i, enb = 0, enk = 0;
	cout << "sýnýf mevcudu 2-50 arasý gir: ", cin >> n;
	if (n >= 2)
	{
		cout <<"1. öðrenci notu: ", cin >> nt;
		enb = nt;
		enk = nt;
		for (i = 2; i <= n; i++)
		{
			cout << i << ". öðrenci notu: ", cin >> nt;
			if (nt >= 0 && nt <= 100)
			{
				tp = tp + nt;

				if (nt > enb)
				{
					enb = nt;
				}
				if (nt < enk)
				{
					enk = nt;
				}
			}
			else
			{
				cout << "Öðrenci notu 0-100 arasý olmalý";
				break;
			}

		}
		cout << "\nsýnýf ort: " << tp / n;
		cout << "\nen yuksek: " << enb;
		cout << "\nen dusuk: " << enk;
	}
	else
	{
		cout << "\nÖðrenci sayýsý 2-50 arasý olmalý";
	}

	*/
	/*

	int sn, ort = 0, bp, n, a, V[100], F[100], i;
	cout << "sýnýf mevcudu: ", cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << i << ". ogrenci VÝZE notunu gir: ", cin >> a;
		V[i] = 0.3 * a;
	}
	for (i = 1; i <= n; i++)
	{
		cout << i << ". ogrenci FÝNAL notunu gir: ", cin >> a;
		F[i] = 0.7 * a;
	}
	for (i = 1; i <= n; i++)
	{
		ort = ort + (V[i] + F[i]);
	}
	sn = ort / n;
	cout << "sýnýf ortalamasý: geçme notu = " << sn << endl;

	for (i = 1; i <= n; i++)
	{
		bp = V[i] + F[i];
		if (bp >= sn)
		{
			cout << i << ". ogrenci basarý: " << bp << ": geçti" << endl;
		}
		else
		{
			cout << i << ". ogrenci basarý: " << bp << ": kaldý" << endl;
		}
	}

	*/
	/*
		int A[100][100], n, i, j, x, y, t = 0;
		cout << "2 boyutlu dizi: ", cin >> n;
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				A[i][j] = rand() % 9;
				if (i == j)
				{
					t = t + A[i][j];
					cout << i << "-" << j << "ana toplam: " << A[i][j] << endl;
				}
			}
		}cout << t << endl;
		/*
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i == j)
				{
					cout << i << "-" << j << "ana toplam: " << A[i][j] << endl;
				}

			}
		}
		cout << "ana kose toplam: " << t;
		*/


		/*
		 int n,A[100][100], i, j,t=0;
			cout << "2 boyut dizi: ", cin >> n;
			for ( i = 1; i <=n; i++)
			{
				for ( j = 1; j <=n ; j++)
				{
					A[i][j] = rand() % 9;
					if (i+j == n+1)
					{
						t = t + A[i][j];
						cout << i << "-" << j << "A dizi: " << A[i][j]<<endl;
					}

				}

			}
			cout << "yedek kose toplam: " << t ;

			*/
/*
	int x, i, kare = 1, fk = 1, bol = 1;
	cout << "sayý gir: ", cin >> x;
	if (x >= 5 && x <= 10)
	{
		kare = x * x;
		cout << kare;
	}
	else if (x < 5)
	{
		for (i = 1; i <= x; i++)
		{
			fk = fk * i;
		}
		cout << fk;
	}
	else
	{
		bol = (x / 2) - 1;
		cout << bol;
	}
	*/
	int j, t = 0;
	for (j = 1; j <= 10; j++)
	{
		if (j % 3 == 0)
		{
			t = t + j;
		}
	}		
	if (t % 2 == 0)
	{
		cout << "cift: " << t << endl;
	}
	else
	{
		cout << "tek: " << t << endl;
	}

	


	return 0;
}