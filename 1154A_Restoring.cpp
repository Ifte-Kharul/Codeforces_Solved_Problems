#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int i, arr[4];
    loop(i, 0, 4, 1)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    cout << arr[3] - arr[0] << " " << arr[3] - arr[1] << " " << arr[3] - arr[2] << endl;
    return 0;
}