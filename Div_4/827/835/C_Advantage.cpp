#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int t, i, n, mx = 0;
    ;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n], arr2[n];

        loop(i, 0, n, 1)
        {
            cin >> arr[i];
            arr2[i] = arr[i];
            // if(arr[i]>mx)
            // mx=arr[i];
        }
        sort(arr2, arr2 + n);
        loop(i, 0, n, 1)
        {
            if (arr[i] != arr2[n - 1])
            {
                cout << arr[i] - arr2[n - 1] << " ";
            }
            else
            {
                cout << arr2[n - 1] - arr2[n - 2] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}