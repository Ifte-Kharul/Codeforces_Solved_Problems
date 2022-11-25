#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << b << " " << (a - b) / 2 << endl;
    }
    else if (b > a)
    {
        cout << a << " " << (b - a) / 2 << endl;
    }
    else
    {
        cout << a << " " << a - b << endl;
    }
    return 0;
}