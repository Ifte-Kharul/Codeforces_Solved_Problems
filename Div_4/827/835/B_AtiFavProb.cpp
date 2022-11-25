#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int t, i, mx, nc;
    char c;
    cin >> t;
    while (t--)
    {
        cin >> nc;
        int arr[nc];
        loop(i, 0, nc, 1)
        {
            cin >> c;
            arr[i] = (int)c - 96;
        }
        sort(arr, arr + nc);
        cout << arr[nc - 1] << endl;
        ;

        // cout << (int)c;
    }
    return 0;
}