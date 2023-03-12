#include <stdio.h>
using namespace std;
#include <iostream>

int main()
{

	setlocale(LC_ALL, "turkish");

	int i, bas, bit, art;


	cout << "Baþlangýç ,bitis ve artis degerlerini sýrayla gir: " << endl, cin >> bas >> bit >> art;
	cout << "\n\n";

	for (i = bas; i <= bit; i += art)
	{
		cout << i << "." << endl;
	}



	return 0;
}
