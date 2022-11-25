#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    string a, b, c;
    int n, i, j;
    cin >> a >> b >> c;
    if (a.length() + b.length() == c.length())
    {
        a = a + b;
        // sort(a,a+a.length());
        sort(a.begin(), a.end());
        sort(c.begin(), c.end());
        if (a == c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}