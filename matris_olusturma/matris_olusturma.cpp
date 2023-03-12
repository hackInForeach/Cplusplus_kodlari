#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

int main()

{
	setlocale(LC_ALL, "turkish");

	int n;
	cout << "Matris kaç boyutlu olacak";
	cin >> n;
	int a[99][99];
	for (int i = 1; i <=n; i++)
	{
		for (int j = 1; j <=n; j++)
		{
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	}
	cout << "Oluþan matris" << endl;
	for (int i = 1; i <=n; i++)
	{
		for (int j = 1; j <=n; j++)
		{
			cout << "a[" << i << "][" << j << "]=" << a[i][j] << endl;
		}
	}

	return 0;
}