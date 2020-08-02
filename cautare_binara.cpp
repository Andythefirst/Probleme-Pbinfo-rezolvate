#include <iostream>

using namespace std;

int x[25005], n, y[200005], m, st, dr, mij;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    cin >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> y[i];
    }
    for(int i = 1; i <= m; i++)
    {
        st = 1;
        dr = n;
        bool ok = 0;
        while(st <= dr && !ok)
        {
           mij = (st + dr) / 2;
           if(y[i] == x[mij])
           {
               ok = 1;
           }
           else
           {
               if(y[i] > x[mij])
               {
                   st = mij + 1;
               }
               else
               {
                   dr = mij - 1;
               }
           }
        }
        if(ok)
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
    return 0;
}
