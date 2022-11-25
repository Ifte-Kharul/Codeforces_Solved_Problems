#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int arr[1000000] = {0};
int main()
{
    for (int i = 2; i <= 1000000; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = 2; i * j <= 1000000; j++)
            {
                arr[i * j] = 1;
            }
        }
    }
    // cout << arr[8];
    int n, i, j;
    cin >> n;
    loop(i, 4, n, 1)
    {
        if (arr[i] == 1)
        {
            j = n - i;
            if (arr[j] == 1)
            {
                cout << i << " " << j << endl;
                break;
            }
            else
            {
                continue;
            }
        }
    }

    return 0;
}