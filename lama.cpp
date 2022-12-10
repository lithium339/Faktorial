#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int hasil = n;
    for (int i = n; i >= 1; i--)
    {
        cout << i << "*";
        if (i == 5)
        {
            continue;
        }
        hasil = hasil * i;
    }
}