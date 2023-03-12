#include <stdint.h>
#include <iostream>
using namespace std;
int main()
{
	int i, a,enk, enb;
	cout << "1. Bir sayý girin: ", cin >> a;
	enb = a;
	enk = a;

	for (i = 2; i <= 10; i++)
	{
		cout << i << ". sayýyý girin", cin >> a;
		if (a >= enb)
		{
			enb = a;
		}
		if (a <= enk)
		{
			a = enk;
		}
	}
	cout << "Girlen sayýlardan en büyk sayý= " << enb << "\nGirilen en küçük sayý= " << enk;

	return 0;
}
