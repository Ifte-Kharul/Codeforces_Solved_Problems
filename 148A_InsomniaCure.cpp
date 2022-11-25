#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var <= limit; var += inc)
using namespace std;
int main()
{
    int k, l, m, n, d, Count = 0;
    cin >> k >> l >> m >> n >> d;
    int i;
    loop(i, 1, d, 1)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            Count++;
        }
    }
    cout << Count << endl;
    return 0;
}