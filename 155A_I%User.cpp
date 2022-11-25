#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, i, j, arr[1000], coun = 0, mn, mx;
    cin >> n;
    loop(i, 0, n, 1)
    {
        cin >> arr[i];
    }
    mx = arr[0];
    mn = arr[0];
    loop(i, 1, n, 1)
    {

        if (mx < arr[i])
        {
            mx = arr[i];
            coun++;
        }
        if (mn > arr[i])
        {
            mn = arr[i];
            coun++;
        }
    }
    cout << coun << endl;
    return 0;
}