#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    set<char> s;
    char a;
    while (cin >> a)
    {
        if (isalpha(a))
            s.insert(a);
    }
    cout << s.size() << endl;
    return 0;
}