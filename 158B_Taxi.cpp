#include <bits/stdc++.h>
using namespace std;
int Max(int b, int c)
{
    if (b > c)
        return b;
    else
        return c;
}
int main()
{
    int n, temp, ans;
    int arr[5] = {0}, res, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr[temp]++;
    }

    arr[1] = Max(arr[1] - arr[3], 0);
    ans = arr[4] + arr[3] + (arr[1] + 2 * arr[2] + 3) / 4;

    cout << ans << endl;
    return 0;
}