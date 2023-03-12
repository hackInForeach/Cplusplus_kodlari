#include <stdio.h>
#include <iostream>
using  namespace std;

int main()
{
    setlocale(LC_ALL, "turkish");

    int i, tk=0, ct=0, a,n;

    cout << "iþlem görmesi istediðiniz toplam sayý adedini girin: ", cin >> n;
    for ( i = 1; i <= n; i++)
    {
        cout << "Bir sayý girin: ", cin >> a;
        if (a%2==0)
        {
            ct = ct + a;
        }
        else
        {
            tk = tk + a;
        }
    }
    cout << "Girilen toplam sayý adedi= " << n 
        << "\nGirilen sayýlardan toplam tekler= " << tk 
        << "\nGirilen sayýlardan toplam çiftler= " << ct;
        

    return 0;
}
