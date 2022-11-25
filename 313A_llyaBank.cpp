#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, l, l2;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        l = n / 10;
        l2 = (n / 100) * 10 + n % 10;
        // cout << "l :" << l;
        // cout << " l2 :" << l2;
        if (l > l2)
        {
            cout << l << endl;
        }
        else
        {
            cout << l2 << endl;
        }
    }
    return 0;
}