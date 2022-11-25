#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, m, i, arr[100000], j = 0;
    long long int sum = 0;
    cin >> n >> m;
    loop(i, 0, m, 1)
    {
        cin >> arr[i];
    }
    sum = arr[0] - 1;
    loop(i, 0, m - 1, 1)
    {
        if (arr[i + 1] >= arr[i])
        {
            sum += arr[i + 1] - arr[i];
        }
        else
        {
            sum += n - (arr[i] - arr[i + 1]);
        }
    }
    cout << sum << endl;
    return 0;
}