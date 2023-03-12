using namespace std;
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	string a,b;
	
	cout << "ÝSÝM VE CÝNSÝYETLE MERHABA DÝYEN PROGRAM";
	cout << "\nÝsim gir : ", cin >> a;
	cout << "\nErkek için 'bay', kadýn için 'hanfendi' yazýn: ", cin >> b;
	cout << "\nMerhaba " << b <<" "<< a;


	return 0;
}
