#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, i, c1 = 0, c2 = 0, c3 = 0, p;
    vector<int> a1, a2, a3;
    cin >> n;
    loop(i, 0, n, 1)
    {
        cin >> p;
        if (p == 1)
        {

            c1++;
            a1.push_back(i + 1);
        }
        if (p == 2)
        {
            c2++;
            a2.push_back(i + 1);
        }
        if (p == 3)
        {
            c3++;
            a3.push_back(i + 1);
        }
    }
    int d = min(c1, min(c2, c3));
    if (d != 0)
    {
        cout << d << endl;
        for (int j = 0; j < d; j++)
        {
            cout << a1[j] << " " << a2[j] << " " << a3[j] << endl;
        }
    }
    else
    {
        cout << d << endl;
    }
    return 0;
}