#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, k, i, l, m, count = 0;

    cin >> n >> k;
    // int arr[2000];
    loop(i, 0, n, 1)
    {
        cin >> l;
        m = 5 - l;
        if (m >= k)
        {
            count++;
        }
    }
    cout << count / 3 << endl;
    return 0;
}