#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    int n, i = 4, sum = 0, rem, note = 0;
    int money[] = {1, 5, 10, 20, 100};
    cin >> n;
    while (n != 0)
    {
        if (money[i] <= n)
        {
            rem = n % money[i];
            note += n / money[i];
            n = rem;
            i--;
        }
        else
        {
            i--;
        }
    }
    cout << note << endl;
    return 0;
}