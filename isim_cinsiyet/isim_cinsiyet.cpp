using namespace std;
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	string a,b;
	
	cout << "�S�M VE C�NS�YETLE MERHABA D�YEN PROGRAM";
	cout << "\n�sim gir : ", cin >> a;
	cout << "\nErkek i�in 'bay', kad�n i�in 'hanfendi' yaz�n: ", cin >> b;
	cout << "\nMerhaba " << b <<" "<< a;


	return 0;
}
