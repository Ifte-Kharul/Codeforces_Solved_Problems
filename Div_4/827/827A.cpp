#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for (int ii = 0; ii < n; ++ii)
int main()
{
    int n, a[10000], b[10000], c[10000];
    cin >> n;
    loop(n)
    {
        cin >> a[ii] >> b[ii] >> c[ii];
    }
    loop(n)
    {
        if ((a[ii] + b[ii] == c[ii]) || (c[ii] + b[ii] == a[ii]) || (a[ii] + c[ii] == b[ii]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}