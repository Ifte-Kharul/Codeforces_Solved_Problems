#include <bits/stdc++.h>
#define loop(var, init, limit, inc) for (var = init; var < limit; var += inc)
using namespace std;
int main()
{
    string a;
    int n, i, coun = 0;
    cin >> n;
    loop(i, 0, n, 1)
    {
        cin >> a;
        if (a == "Tetrahedron")
        {
            coun += 4;
        }
        if (a == "Cube")
        {
            coun += 6;
        }
        if (a == "Octahedron")
        {
            coun += 8;
        }
        if (a == "Dodecahedron")
        {
            coun += 12;
        }
        if (a == "Icosahedron")
        {
            coun += 20;
        }
    }
    cout << coun << endl;
    return 0;
}