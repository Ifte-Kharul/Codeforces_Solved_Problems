#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        if (p == 1)
            c = 1;
    }
    if (c == 1)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
    return 0;
}