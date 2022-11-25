#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lvl, arr[101], arr2[101], p1, p2, flag = 0;
    int arr3[101] = {0};
    cin >> lvl;
    cin >> p1;
    for (int i = 1; i <= p1; i++)
    {
        cin >> arr[i];
        arr3[arr[i]] = 1;
    }
    cin >> p2;
    for (int i = 1; i <= p2; i++)
    {
        cin >> arr[i];
        arr3[arr[i]] = 1;
    }
    for (int i = 1; i <= lvl; i++)
    {
        if (arr3[i] == 0)
            flag = 1;
    }
    if (flag)
    {
        cout << "Oh, my keyboard!" << endl;
    }
    else
    {
        cout << "I become the guy." << endl;
    }
    return 0;
}