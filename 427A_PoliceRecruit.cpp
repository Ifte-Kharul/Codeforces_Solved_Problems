#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, i, e, count = 0, eve = 0;
    cin >> n;
    loop(i, 0, n, 1)
    {
        cin >> e;
        eve += e;
        if (eve < 0)
        {
            count++;
            eve = 0;
        }
    }
    cout << count << endl;
    return 0;
}