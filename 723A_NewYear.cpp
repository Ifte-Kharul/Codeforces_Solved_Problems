#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int a[3], i, mx, mn, point, ans = 0;
    loop(i, 0, 3, 1)
            cin >>
        a[i];
    sort(a, a + 3);
    // mx = a[2];
    // mn = a[0];
    // if ((mx + mn) % 2 != 0)
    //     mn = a[1];
    point = a[1];

    loop(i, 0, 3, 1)
    {
        if (a[i] > point)
        {
            ans += a[i] - point;
        }
        else
        {
            ans += point - a[i];
        }
    }
    cout << ans << endl;
    return 0;
}