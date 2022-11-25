#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
int arr[101];
using namespace std;
int main()
{
    int t, n, i, d, it;

    cin >> t;
    while (t--)
    {
        it = 0;
        int c[101] = {0};
        cin >> n;

        loop(i, 0, n, 1)
        {
            cin >> arr[i];
            c[arr[i]]++;
        }
        while (c[it] != 1)
        {
            it++;
        }
        // cout << " element = " << it << endl;
        // int tp = 0;
        // while (it != arr[tp])
        // {
        //     tp++;
        // }

        // cout << tp + 1 << endl;

        loop(i, 0, n, 1)
        {
            // cout << arr[i] << " "
            //      << " it " << it << endl;
            if (it == arr[i])
            {
                cout << i + 1 << endl;
            }
            // else
            // {
            //     cout << "npt" << endl;
            // }
        }
        // if (arr[0] != arr[1] && arr[0] != arr[2])
        // {
        //     cout << "1" << endl;
        // }
        // else if (arr[n - 1] != arr[n - 2] && arr[n - 1] != arr[n - 3])
        // {
        //     cout << n << endl;
        // }
        // else
        // {
        //     loop(i, 1, n, 1)
        //     {
        //         if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
        //         {
        //             cout << i + 1 << endl;
        //         }
        //     }
        // }
    }

    return 0;
}