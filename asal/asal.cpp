#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int i, a, b = 0;

	setlocale(LC_ALL, "turkish");

	cout << "bir sayý girin: ", cin >> a;
	for (i = 2; i < a; i++) // asal yanýn tam bölünen kýsýmlarý alýnýp aþaðýdaki break komutunda eþitlik sýfýrda bukunur
	{
		if (i % a == 0)
		{
			b = b + 1; 
			break;     // iþlemi kýsaltmak için yapýlan kesme iþlemi
		}
	}
	if (b == 0)
	{
		cout << "Girilen " << a << " sayýsý asal";
	}
	else
	{
		cout << "Girilen " << a << " sayýsý asal deðil";
	}


	return 0;
}

