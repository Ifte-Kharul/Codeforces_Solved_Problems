#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    // cout << "Hello";
    // string a[100000];
    int n, i, j;
    //  coun = 0;
    map<string, int> reg;
    cin >> n;
    string a;
    // cout << n;
    loop(i, 0, n, 1)
    {
        cin >> a;
        if (reg[a] == 0)
        {
            cout << "OK" << endl;
            reg[a] = 1;
        }
        else
        {
            cout << a << reg[a] << endl;
            reg[a]++;
        }
        // cin >> a[i];
        // loop(j, 0, i, 1)
        // {
        //     if (a[i] == a[j])
        //     {
        //         coun++;
        //     }
        // }
        // if (coun == 0)
        // {
        //     cout << "OK" << endl;
        // }
        // else
        // {
        //     cout << a[i] << coun << endl;
        // }
        // coun = 0;
    }
    return 0;
}