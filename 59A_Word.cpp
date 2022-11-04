#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count_cap = 0, count_small = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count_cap++;
        }
        else
        {
            count_small++;
        }
    }
    for (int j = 0; j < s.length(); j++)
    {
        if (count_cap > count_small)
        {
            s[j] = toupper(s[j]);
        }
        else
        {
            s[j] = tolower(s[j]);
        }
    }
    cout << s << "\n";
    return 0;
}