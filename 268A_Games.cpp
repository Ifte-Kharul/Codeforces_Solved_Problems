#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, h[100], g[100], coun = 0;
    int i, j;
    cin >> n;
    loop(i, 0, n, 1)
    {
        cin >> h[i] >> g[i];
    }
    loop(i, 0, n, 1)
    {
        loop(j, 0, n, 1)
        {
            if (h[i] == g[j])
            {
                coun++;
            }
        }
    }
    cout << coun << endl;
    return 0;
}