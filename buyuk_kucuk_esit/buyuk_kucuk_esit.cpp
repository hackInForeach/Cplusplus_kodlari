#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

	setlocale(LC_ALL, "turkish");

	int a,b;
	cout << "BU PROGRAM 2 SAYININ BUYUK OLANINI YAZDIRA PRG.";
	cout << "L�tfen birinci say� gir"<<endl,cin>>a;
	cout << "L�tfen ikinci say� gir"<<endl,cin>>b;

	if (a>b)
	{
		cout << a << " buyuk " << b << " den";
	}
	else if (a<b)
	{
		cout << b << " buyuk " << a << " den";
	}
	else
	{
		cout <<"Girilen say�lar e�ittir";
	}
	
	return 0;
}