#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int t, a, b, i, c, d = 0;
    cin >> t;
    loop(i, 0, t, 1)
    {
        cin >> a >> b;
        cout << (abs(a - b) + 9) / 10 << endl;
        // c = a - b;
        // if (c > 0)
        // {
        //     if (c <= 10)
        //     {
        //         cout << "1" << endl;
        //     }
        //     else
        //     {
        //         d = (c % 10 == 0) ? 0 : 1;
        //         cout << (c / 10) + d << endl;
        //     }
        // }
        // else if (c < 0)
        // {
        //     c = -c;
        //     if (c <= 10)
        //     {
        //         cout << "1" << endl;
        //     }
        //     else
        //     {
        //         d = (c % 10 == 0) ? 0 : 1;
        //         cout << (c / 10) + 1 << endl;
        //     }
        // }
        // else
        // {
        //     cout << c << endl;
        // }
        // c = 0, d = 0;
        // if(a>b){

        // }
    }
    return 0;
}