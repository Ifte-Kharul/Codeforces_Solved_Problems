#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[105], b[105], c[105];
    int n, a1, b1, c1;
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d %d", &a[i], &b[i], &c[i]);
        }
        a1 = a[0];
        b1 = b[0];
        c1 = c[0];

        for (int j = 1; j < n; j++)
        {
            a1 += a[j];
            b1 += b[j];
            c1 += c[j];
        }

        if (a1 == 0 && b1 == 0 && c1 == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}