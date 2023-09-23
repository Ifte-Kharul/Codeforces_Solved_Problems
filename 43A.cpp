#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int test;
    cin >> test;
    int i, team1 = 0, team2 = 0;

    string s1;
    string s2;
    string s3;
    cin >> s1;
    team1++;
    loop(i, 0, test - 1, 1)
    {
        cin >> s2;
        if (s2 == s1)
        {
            team1++;
        }
        else
        {
            s3 = s2;
            team2++;
        }
    }
    if (team1 > team2)
    {
        cout << s1 << endl;
    }
    else
    {
        cout << s3 << endl;
    }
    return 0;
}