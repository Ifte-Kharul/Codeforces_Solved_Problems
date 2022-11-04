#include <bits/stdc++.h>

#define loop(n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    int n, counta = 0, countd = 0;
    char a;
    cin >> n;
    loop(n)
    {
        cin >> a;
        if (a == 'A')
        {
            counta++;
        }
        else
        {
            countd++;
        }
    }
    // cout << counta << " " << countd << endl;
    if (counta > countd)
    {
        cout << "Anton" << endl;
    }
    else if (countd > counta)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}
