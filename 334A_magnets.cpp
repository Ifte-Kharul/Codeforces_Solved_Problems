#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[100010], coutG = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            coutG++;
    }
    cout << coutG << endl;
    return 0;
}