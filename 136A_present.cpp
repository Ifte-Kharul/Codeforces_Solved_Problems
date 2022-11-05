#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[101], arr2[101];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr2[arr[i]] = i;
    }
    for (int i = 1; i <= n; i++)
        cout << arr2[i] << " ";

    cout << endl;
    return 0;
}