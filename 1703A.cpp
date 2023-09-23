#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, i;
    string t;
    cin >> n;
    loop(i, 0, n, 1)
    {
        cin >> t;
        if (t == "YES" || t == "YEs" || t == "YeS" || t == "yES" || t == "Yes" || t == "yEs" || t == "yeS" || t == "yes")
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