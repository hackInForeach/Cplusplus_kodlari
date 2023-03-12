#include <stdarg.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "turkish");
	int a, b, c;

	cout << " bir açý girin: ";
	cin >> a;
	cout << " ikinci açýyý girin: ";
	cin >> b;
	cout << "ucuncu açýyý gýrýn: ";
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
							cout << "Gerçek üçken";
							}
							else
							{
								cout << "üçgen deðil";
							}
						}
						else
						{
							cout << "üçgen deðil";
						}
					}
					else
					{
						cout << "üçgen deðil";
					}
				}
				else
				{
					cout << "üçgen deðil";
				}
			}
			else
			{
				cout << "üçgen deðil";
			}
		}
		else
		{
			cout << "üçgen deðil";
		}

	}
	else
	{
		cout << "üçgen deðil";
	}


	return 0;
}