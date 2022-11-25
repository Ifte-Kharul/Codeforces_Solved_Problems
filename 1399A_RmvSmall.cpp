#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int t, i, j, n, in;
    vector<int> arr;
    cin >> t;
    loop(i, 0, t, 1)
    {
        cin >> n;
        loop(j, 0, n, 1)
        {
            cin >> in;
            arr.push_back(in);
        }
        sort(arr.begin(), arr.end());
        // cout << arr[n - 1];
        int flag = 0;
        loop(j, 1, n, 1)
        {
            if (arr[j] - arr[j - 1] > 1)
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            cout << "YES" << endl;
        }

        arr.clear();
    }

    return 0;
}