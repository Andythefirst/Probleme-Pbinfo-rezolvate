#include <iostream>

using namespace std;

int a[105][105], n, m, s;

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

    for(int i = 1; i <= n; i++)
    {
        s = 0;
        int maxx = -2000000;
        for(int j = 1; j <= m; j++)
        {
            if(a[i][j] > maxx)
            {
                maxx = a[i][j];
            }
            s = s + a[i][j];
        }
        cout << s - maxx << " ";
    }
    return 0;
}