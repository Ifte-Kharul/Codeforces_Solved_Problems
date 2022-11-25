#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int t, n, i = 1, arr[1001];
    for (int j = 1; j <= 1000; j++)
    {
        while (i % 3 == 0 || i % 10 == 3)
        {
            i++;
        }
        arr[j] = i;
        i++;
    }
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << arr[n] << endl;
    }
    return 0;
}