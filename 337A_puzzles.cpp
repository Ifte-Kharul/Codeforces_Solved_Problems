#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, m, i, arr[100], j, min = INT_MAX, tm;
    cin >> n >> m;
    loop(i, 0, m, 1)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    loop(i, 0, m - n + 1, 1)
    {
        // loop(j, i, n, 1)
        // {

        // }
        tm = arr[n + i - 1] - arr[i];
        if (tm <= min)
        {
            min = tm;
        }
    }
    cout << min << endl;
    // cout << arr[n - 1] - arr[0] << endl;
    return 0;
}