#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int flg = 0;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9'
            // || s[i] == '+'
        )
            flg = 1;
    }
    if (flg)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}