using namespace std;
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a,b;

	cout << "DÝKDÖRTGENÝN ALAN VE ÇEVRESÝNÝ HESAPLAYAN PRG.";
	cout << "\nBir kenar uzunluðunu gir: ", cin >> a; 
	cout << "Diðer kenar uzun luðunu gir: ", cin >> b;
	cout << "Alan: " << a * b << "\nÇevre: " << 2 * (b + a);



	return 0;
}
