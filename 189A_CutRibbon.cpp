#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, a, b, c, i, m, count = 1;
    ;
    cin >> n >> a >> b >> c;
    int dp[n + 1];
    dp[0] = 0;
    int x, y, z;
    for (i = 1; i <= n; i++)
    {
        x = INT_MIN, y = INT_MIN, z = INT_MIN;
        if (i >= a)
            x = dp[i - a];
        if (i >= b)
            y = dp[i - b];
        if (i >= c)
            z = dp[i - c];
        dp[i] = 1 + max(x, max(y, z));
    }
    cout << dp[n] << endl;
    // loop(i, 0, 3, 1)
    // {
    //     cin >> arr[i];
    // }
    // sort(arr, arr + 3);
    // i = 1;
    // m = arr[0];
    // int mx = 0;
    // if (arr[0] + arr[1] + arr[2] < n)
    // {
    //     int j = 0;
    //     loop(i, 0, 3, 1)
    //     {

    //         if (mx < n / arr[i])
    //         {
    //             mx = n / arr[i];
    //         }
    //     }

    //     // while (n % arr[j] != 0)
    //     // {
    //     //     j++;
    //     // }
    //     cout << mx << endl;
    // }
    // else
    // {
    //     while (m < n)
    //     {
    //         m += arr[i];
    //         i++;
    //     }
    //     cout << i << endl;
    // }

    return 0;
}