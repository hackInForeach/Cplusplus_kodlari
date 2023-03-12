#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int i, k, a = 0, s;
	for (i = 1; i <= 3; i++)
	{
		cout << "Bir sayı girin: ", cin >> s;
		k = 0;
		for (int j = s - 1; j > 1; j--)
		{
			if (s % j == 0)
			{
				k++;
				break;
			}
			if (k == 0)
			{
				a++;
				break;
			}
		}
	}
	cout << "Girilen 10 sayıdan " << a << " Tanesi Asaldır";
	
	return 0;
}