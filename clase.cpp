#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("clase.in");
ofstream fout("clase.out");

long long n, m, a[10005], b[10005], st, dr, mij, cont;

int main()
{
    fin >> n;
    for(int i = 1; i <= n; i++)
    {
        fin >> a[i];
    }
    fin >> m;
    for(int i = 1; i <= m; i++)
    {
        fin >> b[i];
    }
    for(int i = 1; i <= m; i++)
    {
        st = 1;
        dr = n;
        bool ok = 0;
        while(st <= dr && !ok)
        {
            mij = (st + dr) / 2;
            if(b[i] == a[mij])
            {
                ok = 1;
            }
            else
            {
                if(b[i] > a[mij])
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
            cont++;
        }
    }
    fout << cont;
    return 0;
}
