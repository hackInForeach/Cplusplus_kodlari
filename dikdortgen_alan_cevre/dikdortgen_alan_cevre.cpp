using namespace std;
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a,b;

	cout << "D�KD�RTGEN�N ALAN VE �EVRES�N� HESAPLAYAN PRG.";
	cout << "\nBir kenar uzunlu�unu gir: ", cin >> a; 
	cout << "Di�er kenar uzun lu�unu gir: ", cin >> b;
	cout << "Alan: " << a * b << "\n�evre: " << 2 * (b + a);



	return 0;
}
