#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int k, r, count = 1, i = 1, m;
    cin >> k >> r;
    m = k;
    while (m % 10 != 0 && m % 10 != r)
    {
        ++i;
        m = k * i;
        // cout << " k " << k << endl;
        // count++;
    }
    // cout << k % 10 << endl;
    cout << i << endl;
    return 0;
}