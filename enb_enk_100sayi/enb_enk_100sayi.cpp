#include <stdint.h>
#include <iostream>
using namespace std;
int main()
{
	int i, a,enk, enb;
	cout << "1. Bir say� girin: ", cin >> a;
	enb = a;
	enk = a;

	for (i = 2; i <= 10; i++)
	{
		cout << i << ". say�y� girin", cin >> a;
		if (a >= enb)
		{
			enb = a;
		}
		if (a <= enk)
		{
			a = enk;
		}
	}
	cout << "Girlen say�lardan en b�yk say�= " << enb << "\nGirilen en k���k say�= " << enk;

	return 0;
}
