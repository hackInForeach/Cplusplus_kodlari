#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()

{
	setlocale(LC_ALL, "turkish");
	int ne;
	cout << "Eleman Sayýsýný Gir : ";
	cin >> ne;
	int sayilar[ne];
	for (int i = 0; i < n; i++)
	{
		cout << (i + 1) << ". Sayý : ";
		cin >> sayilar[i];
	}


	//int a, b, k, c = 0, i, j;

	//cout << "bir sayý gir: ", cin >> a;
	//for (i = 1; i <= a; i++)
	//{

	//	cout << "asýl sayýyý gir: ", cin >> b;
	//	k = 0;
	//	for (j = b - 1; j > 1; j--)
	//	{
	//		if (b % j == 0)
	//		{
	//			k++;
	//			break;
	//		}
	//	}

	//	if (k == 0)
	//	{
	//		c++;
	//	}
	//}
	//cout << "Girilen " << a << " sayýdan " << c << " tanesi asal";

	return 0;
}