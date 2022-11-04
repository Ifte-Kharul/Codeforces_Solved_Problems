#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[] = "hello";
    char a;
    int i = 0;
    while (cin >> a)
        if (a == arr[i])
            i++;

    if (i == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}