#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k, res = 0;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k <= n / 2)
        {
            res = 2 * (k - 1) + 1;
        }
        else
        {
            res = (k - (n / 2)) * 2;
        }
    }
    else
    {
        if (k <= (n / 2) + 1)
        {
            res = 2 * (k - 1) + 1;
        }
        else
        {
            res = (k - ((n / 2) + 1)) * 2;
        }
    }
    cout << res << endl;
    return 0;
}