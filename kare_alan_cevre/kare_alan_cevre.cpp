using namespace std;
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a;

	cout << "KAREN�N ALAN VE �EVRES�N� HESAPLAYAN PRG.";
	cout << "\nBir kenar uzunlu�unu gir: ", cin >> a;
	cout << "Alan: " << a * a << "\n�evre: " << 2 * (a + a);



	return 0;
}
