#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n >= 1900)
            cout << "Division 1" << endl;
        if (n >= 1600 && n <= 1899)
            cout << "Division 2" << endl;
        if (n >= 1400 && n <= 1599)
            cout << "Division 3" << endl;
        if (n <= 1399)
            cout << "Division 4" << endl;
    }
    return 0;
}