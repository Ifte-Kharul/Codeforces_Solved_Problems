#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    string a, b = "WUB";
    char d[] = " ";
    const char *e = " ";
    int i, c = 0;
    cin >> a;
    loop(i, 0, a.length(), 1)
    {
        if (a[i] == b[0] && a[i + 1] == b[1] && a[i + 2] == b[2])
        {
            a[i] = d[0];
            a[i + 1] = d[0];
            a[i + 2] = d[0];
            cout << " ";
            i += 2;
            continue;
        }
        // else
        // {
        //     cout << a[i];
        //     c++;
        // }
        cout << a[i];
    }
    // for (int j = i; j < a.length(); j++)
    // {
    //     cout << a[j];
    // }
    // while (i < a.length())
    // {
    //     int ind = a.find(b);
    //     if (ind != std::string::npos)
    //     {
    //         a.erase(ind, b.length());
    //     }

    //     i++;
    // }
    // cout << a << endl;

    return 0;
}