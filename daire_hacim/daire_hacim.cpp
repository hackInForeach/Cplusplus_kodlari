using namespace std;
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a;

	cout << "DA�REN�N YARI�APINI ALIP HACM�N� HESAPLAYAN PRG.";
	cout << "\nYari �ap� gir: ", cin >> a;
	cout << "\nHacim" << 4 / 3 * 3.14 * a * a * a;



	return 0;
}
