#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int t, i;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        int len = a.length();
        cout << a[0];
        loop(i, 1, len, 2)
        {
            cout << a[i];
        }
        cout << endl;
    }

    return 0;
}