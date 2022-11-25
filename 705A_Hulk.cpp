#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    int n;
    cin >> n;
    // cout << "I ";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            a = "hate ";
        else
            a = "love ";
        if (i == n)
            b = "it";
        else
            b = "that ";
        cout << "I " << a << b;
    }
    cout << endl;
    return 0;
}