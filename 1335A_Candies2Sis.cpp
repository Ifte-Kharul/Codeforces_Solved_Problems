#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    long long int n;
    int test, i;
    cin >> test;
    loop(i, 0, test, 1)
    {
        cin >> n;
        cout << n - ((n / 2) + 1) << endl;
    }

    return 0;
}