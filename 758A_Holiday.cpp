#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, i, sum = 0;
    cin >> n;
    int arr[n];
    loop(i, 0, n, 1)
    {
        cin >> arr[i];
        // if (arr[i] > mx)
        // {
        //     mx = arr[i];
        // }
    }
    sort(arr, arr + n);
    loop(i, 0, n - 1, 1)
    {
        sum += (arr[n - 1] - arr[i]);
    }
    cout << sum << endl;
    return 0;
}