#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, i;
    set<char> a;
    char b;
    cin >> n;
    loop(i, 0, n, 1)
    {
        cin >> b;

        a.insert(tolower(b));
    }
    if (a.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    // cout << a.begin() << endl;
    return 0;
}