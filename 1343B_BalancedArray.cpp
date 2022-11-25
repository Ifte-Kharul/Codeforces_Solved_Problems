#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var <= limit; var += inc)
using namespace std;
int main()
{
    int t, i, n, ev[100000], odd[100000];
    cin >> t;
    while (t--)
    {
        cin >> n;
        // int ch = (n * (n + 1)) / 2;
        if (n % 4 != 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES" << endl;
            loop(i, 1, n / 2, 1)
            {

                cout << i * 2 << " ";
            }
            loop(i, 1, (n / 2) - 1, 1)
            {

                cout << i * 2 - 1 << " ";
            }
            cout << n + (n / 2) - 1;
        }
        cout << endl;
    }
    return 0;
}