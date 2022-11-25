#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    string a;

    int i, first = 0, small = 0, cap = 0, un = 0;

    cin >> a;
    if (a.length() == 1)
    {
        if (a[0] >= 'a' && a[0] <= 'z')
        {
            a[0] -= 32;
        }
        else
        {
            a[0] += 32;
        }
    }
    if (a[0] >= 'a' && a[0] <= 'z')
    {
        for (i = 1; i < a.length(); i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                small = 1;
            }
            else
            {
                small = 0;
                break;
            }
        }
        if (small)
        {
            a[0] = a[0] - 32;
            loop(i, 1, a.length(), 1)
            {
                a[i] = a[i] + 32;
            }
        }
    }
    if (a[0] >= 'A' && a[0] <= 'Z')
    {
        loop(i, 1, a.length(), 1)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                un = 1;
            }
            else
            {
                un = 0;
                break;
            }
        }
        if (un)
        {
            loop(i, 0, a.length(), 1)
                a[i] = a[i] + 32;
        }
    }
    // }else{

    // }
    // if (a[0] >= 'a' && a[0] <= 'z')
    // {
    //     first = 1;
    //     // a[0] = a[0] - 32;
    // }
    // loop(i, 1, a.length(), 1)
    // {
    //     if (a[1] >= 'A' && a[1] <= 'Z')
    //     {
    //         if (a[i] > 'Z')
    //         {
    //             un = 1;
    //             cap = 0;
    //             break;
    //             // a[i] = a[i] + 32;
    //         }
    //         cap = 1;
    //     }
    //     if (a[1] >= 'a' && a[1] <= 'z')
    //     {
    //         if (a[i] < 'a')
    //         {
    //             un = 1;
    //             small = 0;
    //             break;
    //         }
    //         small = 1;
    //     }
    // }
    // if (first && !un)
    // {
    //     a[0] = a[0] - 32;
    // }
    // if (!un)
    // {

    //     loop(i, 0, a.length(), 1)
    //     {
    //         if (!first && cap)
    //         {
    //             a[i] = a[i] + 32;
    //         }
    //     }
    // }

    cout << a << endl;
    return 0;
}