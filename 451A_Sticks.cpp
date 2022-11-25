#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int a, b, c, i = 1;

    cin >> a >> b;
    int count = 0;
    while (1)
    {
        if (a - i == 0 || b - i == 0)
            break;
        i++;
        count++;
    }
    if (count % 2 == 0)
    {
        cout << "Akshat" << endl;
    }
    else
    {
        cout << "Malvika" << endl;
    }

    // if (a == 1 || b == 1)
    // {
    //     cout << "Akshat" << endl;
    // }
    // else if (c % 2 == 0)
    // {
    //     cout << "Malvika" << endl;
    // }
    // else
    // {
    //     cout << "Akshat" << endl;
    // }
    return 0;
}