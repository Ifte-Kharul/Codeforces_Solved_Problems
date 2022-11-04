// not solved
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for (int ii = 0; ii < n; ++ii)
#define loop2(n) for (int j = 0; j < n; ++j)
#define ARRAY_LENGTH(array) (sizeof((array)) / sizeof((array)[0]))
int main()
{
    int test_case, array_size, array[100][101];
    int test = 0;
    cin >> test_case;
    loop(test_case)
    {
        cin >> array_size;
        loop2(array_size)
        {
            cin >> array[ii][j];
        }
    }
    loop(test_case)
    {
        int len = ARRAY_LENGTH(array[ii]);
        loop2(len)
        {
            if (len > 1)
            {
                for (int k = j; k < len; k++)
                {
                    if (array[ii][j] == array[ii][k])
                    {

                        test = 0;
                    }
                    else
                    {
                        test = 1;
                    }
                }
            }
        }
        if (test || len == 1)
        {
            cout << "YES" << endl;
        }
        else

        {
            cout << "NO" << endl;
        }
    }
    return 0;
}