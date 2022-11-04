#include <bits/stdc++.h>
#define loop(m, n, s) for (m = s; m < n; m++)
using namespace std;
int main()
{
    int n, h, i, countW = 0, fh;
    cin >> n >> h;
    loop(i, n, 0)
    {
        cin >> fh;
        if (fh <= h)
            countW++;
        if (fh > h)
            countW += 2;
    }
    cout << countW << endl;

    return 0;
}