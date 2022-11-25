#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, arr[1000], i, s = 0, d = 0;
    cin >> n;
    loop(i, 0, n, 1)
    {
        cin >> arr[i];
    }
    // sort(arr, arr + n, greater<int>());

    int *l = arr, *h = arr + n - 1;
    // cout << *(l + 1) << *h;
    // loop(i, 0, n, 1)
    // {
    //     // if (i % 2 == 0)
    //     // {
    //     //     s += arr[i];
    //     // }
    //     // else
    //     // {
    //     //     d += arr[i];
    //     // }
    //     cout << arr[i] << " ";
    // }
    int c = 0;
    while (l <= h)
    {
        if (c % 2 == 0)
        {
            if (*l > *h)
            {
                s += *l;
                l++;
            }
            else
            {
                s += *h;
                h--;
            }
        }
        else
        {
            if (*l > *h)
            {
                d += *l;
                l++;
            }
            else
            {
                d += *h;
                h--;
            }
        }
        c++;
    }
    cout << s << " " << d << endl;
    c = 0;
    // s = 0, i = 0, d = 0;
    return 0;
}