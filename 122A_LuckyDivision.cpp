#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 447 == 0 || n % 477 == 0 || n % 774 == 0)
    {
        cout << "YES" << endl;
        return 0;
    }
    else
    {
        // while (n != 0)
        // {
        //     if (n % 10 != 4 && n % 10 != 7)
        //     {
        //         cout << "NO" << endl;
        //         return 0;
        //     }
        //     n = n / 10;
        // }
        cout << "NO" << endl;
    }
    return 0;
}