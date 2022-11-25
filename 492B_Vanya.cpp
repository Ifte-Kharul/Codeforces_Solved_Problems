#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, l, i, mn = 0;
    cin >> n >> l;
    int arr[10001];
    loop(i, 0, n, 1)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    loop(i, 0, n - 1, 1)
    {
        if (arr[i + 1] - arr[i] > mn)
        {
            mn = arr[i + 1] - arr[i];
        }
    }
    double x = (double)mn / 2;
    double y = arr[0];
    double ans = max(x, y);
    double z = l - arr[n - 1];
    ans = max(ans, z);
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}