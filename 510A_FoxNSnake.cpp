#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var <= limit; var += inc)
using namespace std;
int main()
{
    int row, col, i, j, coun = 0;
    cin >> row >> col;
    loop(i, 1, row, 1)
    {
        loop(j, 1, col, 1)
        {
            if (i % 2 == 0 && coun % 2 == 0)
            {
                if (j == col)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            else if (i % 2 == 0 && coun % 2 != 0)
            {
                if (j == 1)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            else
            {
                cout << "#";
            }
        }
        if (i % 2 == 0)
        {
            coun++;
        }
        cout << endl;
    }
    return 0;
}