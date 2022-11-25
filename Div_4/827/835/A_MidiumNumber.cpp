#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int t, i, arr[3];
    cin >> t;
    while (t--)
    {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        cout << arr[1] << endl;
    }
    return 0;
}