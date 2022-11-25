#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int to, lime, salt;
    to = (k * l) / nl;
    lime = c * d;
    salt = p / np;
    cout << min(to, min(lime, salt)) / n << endl;
    return 0;
}