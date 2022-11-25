#include <bits/stdc++.h>
#define loop(var, init, limit) for (var = init; var < limit; var++)
using namespace std;
int main()
{
    int n, arr[101], mx, mn, indexMn, time = 0;
    cin >> n;
    int i;
    loop(i, 0, n)
    {
        cin >> arr[i];
    }
    mx = *max_element(arr, arr + n);
    mn = *min_element(arr, arr + n);
    int indexMx = find(arr, arr + n, mx) - arr;
    // find min index
    loop(i, 0, n)
    {
        if (arr[i] == mn)
            indexMn = i;
    }
    time += indexMx;
    if (indexMn > indexMx)
    {
        time += n - (indexMn + 1);
    }
    else
    {
        time += n - (indexMn + 2);
    }

    // int indexMn = find(arr, arr + n, mn) - arr;
    // cout << "time " << indexMx << " " << indexMn << endl;
    cout << time << endl;
    return 0;
}