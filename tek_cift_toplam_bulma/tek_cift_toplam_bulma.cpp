#include <stdio.h>
#include <iostream>
using  namespace std;

int main()
{
    setlocale(LC_ALL, "turkish");

    int i, tk=0, ct=0, a,n;

    cout << "i�lem g�rmesi istedi�iniz toplam say� adedini girin: ", cin >> n;
    for ( i = 1; i <= n; i++)
    {
        cout << "Bir say� girin: ", cin >> a;
        if (a%2==0)
        {
            ct = ct + a;
        }
        else
        {
            tk = tk + a;
        }
    }
    cout << "Girilen toplam say� adedi= " << n 
        << "\nGirilen say�lardan toplam tekler= " << tk 
        << "\nGirilen say�lardan toplam �iftler= " << ct;
        

    return 0;
}
