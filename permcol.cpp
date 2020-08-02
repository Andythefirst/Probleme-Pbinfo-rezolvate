#include <iostream>

using namespace std;

int n, m ,a[105][105];

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
        a[i][m+1] = a[i][1];
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 2; j <= m+1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

