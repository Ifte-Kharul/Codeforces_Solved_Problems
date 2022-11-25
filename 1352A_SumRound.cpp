#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int t, a, i, j, count = 0;
    vector<int> b;
    cin >> t;
    loop(i, 0, t, 1)
    {
        cin >> a;
        if (a % 10 != 0)
        {
            b.push_back(a % 10);
            count++;
        }
        // j=a%10;
        a -= (a % 10);

        if (a % 100 != 0)
        {
            b.push_back(a % 100);
            count++;
        }
        a -= (a % 100);
        if (a % 1000 != 0)
        {
            b.push_back(a % 1000);
            count++;
        }
        a -= (a % 1000);
        if (a % 10000 != 0)
        {
            b.push_back(a % 10000);
            count++;
        }
        if (a >= 10000 && a % 10000 == 0)
        {
            b.push_back(a);
            count++;
        }
        cout << count << endl;
        loop(j, 0, b.size(), 1)
                cout
            << b[j] << " ";
        cout << endl;
        count = 0;
        b.clear();
    }

    return 0;
}