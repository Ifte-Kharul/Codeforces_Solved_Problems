#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c = "";
    int n, n1, n2;
    cin >> a >> b;
    n = a.length();
    for (int i = 0; i < n; i++)
    {
        // n1 = a[i] - '0';
        // n2 = b[i] - '0';
        // c[i] = n1 ^ n2;
        // cout << c[i] + '0';
        if (a[i] != b[i])
            c += '1';
        else
            c += '0';

        // cout << c[i];
    }
    cout << c << endl;
    return 0;
}