#include <iostream>

using namespace std;

int n, m, a[105][105], contor;

bool NrPrim(int x)
{
    if(x < 2)
        return false;
    else if(x == 2)
        return true;
    else
        for(int d = 2; d * d <= x; d++)
            if(x % d == 0)
                return false;
    return true;
}

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 2; i <= n; i = i + 2)
    {
        for(int j = 1; j <= m; j++)
        {
            if(NrPrim(a[i][j]))
            {
                contor++;
            }
        }
    }
    cout << contor;
    return 0;
}
