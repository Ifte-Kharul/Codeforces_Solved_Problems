#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int test_case, a, b;
    cin >> test_case;
    int i;
    loop(i, 0, test_case, 1)
    {
        cin >> a >> b;
        if (a > b)
        {
            if (a % b != 0)
                cout << b - (a % b) << endl;
            else
                cout << a % b << endl;
        }

        else
            cout << b - a << endl;
    }

    return 0;
}