#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int i, s, n;
    pair<int, int> a[1000];
    cin >> s >> n;
    loop(i, 0, n, 1)
    {
        cin >> a[i].first >> a[i].second;
    }

    sort(a, a + n);
    loop(i, 0, n, 1)
    {
        if (s <= a[i].first)
        {
            cout << "NO" << endl;
            s = -1;
            break;
        }
        else
        {
            s = s + a[i].second;
        }
    }

    if (s >= 0)
    {
        cout << "YES" << endl;
    }
    return 0;
}
