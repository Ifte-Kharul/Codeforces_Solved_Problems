#include <bits/stdc++.h>
using namespace std;
int main()
{
    int st, entry, out, num = 0, max_num = 0;
    cin >> st;
    for (int i = 0; i < st; i++)
    {
        cin >> out >> entry;
        num = (num - out) + entry;
        if (num >= max_num)
        {
            max_num = num;
        }
    }

    cout << max_num << endl;

    return 0;
}
/*
10
0 5
1 7
10 8
5 3
0 5
3 3
8 8
0 6
10 1
9 0
*/