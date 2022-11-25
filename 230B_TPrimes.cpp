#include <bits/stdc++.h>
int arr[1000000] = {0};
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int t, i, j, coun = 0;

    loop(i, 2, 1000001, 1)
    {
        if (arr[i] == 0)
        {
            for (j = 2; i * j <= 1000000; j++)
            {

                arr[i * j] = 1;
            }
        }
    }
    cin >> t;
    long long int n, ans;
    loop(i, 0, t, 1)
    {
        cin >> n;
        ans = sqrt(n);
        if (n == 1)
        {
            cout << "NO" << endl;
        }
        else if (ans * ans == n && arr[ans] == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // loop(j, 1, ans, 1)
        // {
        //     if (ans * ans == n && ans % j == 0)
        //     {
        //         coun++;
        //     }
        // }
        // if (coun == 1)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        // coun = 0;
    }
    return 0;
}