#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int test, i, n;
    cin >> test;
    while (test--)
    {
        cin >> n;
        loop(i, 1, n + 1, 1)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}