#include <bits/stdc++.h>
using namespace std;
#define x 1
#define l 3
#define m 2
#define s -1

int main()
{
    int n;
    int acount = 1, bcount = 1;
    string a[10001], b[10001];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < a[j].length(); k++)
        {
            if (a[j][k] == 'X')
            {
                acount++;
            }
            else if (a[j][k] == 'L')
            {
                acount = acount * l;
            }
            else if (a[j][k] == 'M')
            {
                acount = acount * m;
            }

            else if (a[j][k] == 'S')
            {
                acount = acount * s;
            }
        }
        for (int p = 0; p < b[j].length(); p++)
        {
            if (b[j][p] == 'X')
            {
                bcount++;
            }
            else if (b[j][p] == 'L')
            {
                bcount = bcount * l;
            }
            else if (b[j][p] == 'M')
            {
                bcount = bcount * m;
            }

            else if (b[j][p] == 'S')
            {
                bcount = bcount * s;
            }
        }

        if (acount > bcount)
        {
            cout << ">" << endl;
        }
        if (acount < bcount)
        {
            cout << "<" << endl;
        }
        if (acount == bcount)
        {
            cout << "=" << endl;
        }
        acount = 1;
        bcount = 1;
    }
    return 0;
}