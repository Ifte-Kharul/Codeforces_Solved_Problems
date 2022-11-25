#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[100001], coun = 0, tem = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            tem++;
            // cout << "TemP val: " << tem << endl;
            if (tem > coun)
                coun = tem;
        }
        else
        {

            tem = 0;
        }
    }
    cout << coun + 1 << endl;
    return 0;
}