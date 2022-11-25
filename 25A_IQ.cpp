#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, i, arr[100], diff = 0, counE = 0, counO = 0, oi, ei;
    cin >> n;
    loop(i, 0, n, 1)
    {
        cin >> arr[i];
    }
    loop(i, 0, n, 1)
    {
        if (arr[i] % 2 == 0)
        {
            counE++;
            // cout << "CE inc" << endl;
            ei = i;
        }
        else
        {
            counO++;
            // cout << "OE inc" << endl;
            oi = i;
        }
    }
    if (counO == 1)
    {
        cout << oi + 1 << endl;
    }
    // if (counE == 1)
    else
    {
        cout << ei + 1 << endl;
    }
    // diff = arr[1] - arr[0];
    // loop(i, 2, n, 1)
    // {
    //     if (arr[i] != arr[0] + ((i + 1) * diff))
    //     {
    //         coun++;
    //     }
    // }
    // cout << coun << endl;
    return 0;
}