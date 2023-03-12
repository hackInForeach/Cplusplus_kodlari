using namespace std;
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a;

	cout << "DAÝRENÝN YARIÇAPINI ALIP HACMÝNÝ HESAPLAYAN PRG.";
	cout << "\nYari çapý gir: ", cin >> a;
	cout << "\nHacim" << 4 / 3 * 3.14 * a * a * a;



	return 0;
}
