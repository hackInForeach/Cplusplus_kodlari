#include <stdarg.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "turkish");
	int a, b, c;

	cout << " bir a�� girin: ";
	cin >> a;
	cout << " ikinci a��y� girin: ";
	cin >> b;
	cout << "ucuncu a��y� g�r�n: ";
	cin >> c;
	if (a + b + c == 180)
	{
		if (b - c < a)
		{
			if (a < b + c)
			{
				if (a - c < b)
				{
					if (b < a + c)
					{
						if (a - b < c)
						{
							if (c < a + b)
							{
							cout << "Ger�ek ��ken";
							}
							else
							{
								cout << "��gen de�il";
							}
						}
						else
						{
							cout << "��gen de�il";
						}
					}
					else
					{
						cout << "��gen de�il";
					}
				}
				else
				{
					cout << "��gen de�il";
				}
			}
			else
			{
				cout << "��gen de�il";
			}
		}
		else
		{
			cout << "��gen de�il";
		}

	}
	else
	{
		cout << "��gen de�il";
	}


	return 0;
}