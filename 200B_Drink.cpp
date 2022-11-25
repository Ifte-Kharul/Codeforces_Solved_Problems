#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long double val, sum = 0.0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        sum += val;
    }
    cout << sum / n << endl;
    return 0;
}