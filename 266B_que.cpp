#include <bits/stdc++.h>
#define loop(m, n, s) for (m = s; m < n; m++)
using namespace std;

int main()
{
    int n, i, t, j;
    char arr[100];
    cin >> n >> t;
    loop(i, n, 0)
    {
        cin >> arr[i];
    }
    loop(j, t, 0)
    {
        loop(i, n, 1)
        {
            if (arr[i] == 'G' && arr[i - 1] == 'B')
            {
                swap(arr[i], arr[i - 1]);
                i++;
            }
        }
    }
    loop(i, n, 0)
            cout
        << arr[i];

    cout << endl;
    return 0;
}