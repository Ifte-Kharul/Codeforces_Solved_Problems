#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, e[6];
    cin >> a >> b >> c;
    // e1 = a + b * c;
    // e2 = a * (b + c);
    // e3 = a * b * c;
    // e4 = (a + b) * c;
    // e5 = a + b + c;

    e[0] = a + b * c;
    e[1] = a * (b + c);
    e[2] = a * b * c;
    e[3] = (a + b) * c;
    e[4] = a + b + c;
    e[5] = a * b + c;
    sort(e, e + 6);

    // if (e1 > e2 && e1 > e3 && e1 > e4)
    // {
    //     cout << e1 << endl;
    // }
    // else if (e2 > e1 && e2 > e3 && e2 > e4)
    // {
    //     cout << e2 << endl;
    // }
    // else if (e3 > e2 && e3 > e1 && e3 > e4)
    // {
    //     cout << e3 << endl;
    // }
    // else if (e4 > e2 && e4 > e3 && e4 > e1)
    // {
    //     cout << e4 << endl;
    // }
    // else
    // {
    //     cout << a + b + c << endl;
    // }
    cout << e[5] << endl;
    return 0;
}