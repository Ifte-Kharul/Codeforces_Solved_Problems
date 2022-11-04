#include <bits/stdc++.h>
using namespace std;
int count_digits(long long int number)
{
    int count = 0;
    while (number != 0)
    {
        if (number % 10 == 4 || number % 10 == 7)
        {
            count++;
        }
        number = number / 10;
    }
    return count;
}
int main()
{
    long long int n, temp = 0;

    cin >> n;
    int digit = count_digits(n);

    if (digit != 0)
    {
        if (digit == 4 || digit == 7)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}