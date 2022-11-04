#include <bits/stdc++.h>
using namespace std;
int main()
{
    string team;
    int count = 0;
    cin >> team;
    if (team.length() < 7)
    {
        printf("NO");
    }
    else
    {
        for (int i = 0; i < team.length(); i++)
        {
            if (team[i] == '0')
            {
                count++;
                if (count >= 7)
                {
                    printf("YES");
                    break;
                }

                if (team[i + 1] == '1')
                {
                    count = 0;
                }
            }
            if (team[i] == '1')
            {
                count++;
                if (count >= 7)
                {
                    printf("YES");
                    break;
                }

                if (team[i + 1] == '0')
                {
                    count = 0;
                }
            }
        }
        if (count < 7)
        {
            printf("NO");
        }
    }
    return 0;
}