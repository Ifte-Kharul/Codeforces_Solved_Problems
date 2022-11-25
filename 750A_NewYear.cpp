#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, k, i, count = 0;
    cin >> n >> k;
    k = 240 - k;
    for (i = 1; i * 5 <= k; i++)
    {
        k = k - (5 * i);
        count++;
    }
    if (count >= n)
    {
        cout << n << endl;
    }
    else
    {
        cout << count << endl;
    }
    return 0;
}