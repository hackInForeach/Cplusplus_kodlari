using namespace std;
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a;

	cout << "KARENÝN ALAN VE ÇEVRESÝNÝ HESAPLAYAN PRG.";
	cout << "\nBir kenar uzunluðunu gir: ", cin >> a;
	cout << "Alan: " << a * a << "\nÇevre: " << 2 * (a + a);



	return 0;
}
