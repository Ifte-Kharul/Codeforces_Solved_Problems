#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[101], arr2[101], sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            arr2[i] = arr[i];
        else
            arr2[i] = arr[i] + arr2[i - 1];
        // cout << "Arr 2 value : " << i << " " << arr2[i] << endl;
        // cout << "array value : " << arr[i] << endl;
        for (int j = n - 1; j > i; j--)
        {
            sum += arr[j];
        }
        if (sum < arr2[i])
        {
            // cout << "SUM : " << sum << endl;
            // cout << "Arr 2 value : " << arr2[i] << endl;
            cout << i + 1 << endl;
            break;
        }
        sum = 0;
    }

    return 0;
}