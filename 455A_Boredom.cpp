#include <bits/stdc++.h>
typedef long long int ln;
using namespace std;
ln dp[100005] = {0};

ln boredom(ln t)
{
    if (t == 0)
        return 0;
    if (t == 1)
        return dp[1];
    return max(boredom(t - 1), (boredom(t - 2) + t * dp[t]));
}
int main()
{
    ln a, b, m = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        dp[b]++;
        m = max(m, b);
    }
    cout << boredom(m);
    return 0;
}