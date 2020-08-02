#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("zoo.in");
ofstream fout("zoo.out");

int n, m, a[105][105], q, i1, j1, i2, j2;
long long sum[105][105], s;

void SumePart()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            sum[i][j] = sum[i-1][j] + sum [i][j-1] - sum [i-1][j-1] + a[i][j];
        }
    }
}

void Intrebari()
{
    ///i1 j1 sus , i2 j2 jos
    s = sum[i2][j2] - sum [i1-1][j2] - sum[i2][j1-1] + sum[i1-1][j1-1];
    fout << s;
    fout << "\n";
}

int main()
{
    fin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            fin >> a[i][j];
        }
    }
    SumePart();
    fin >> q;
    while(q)
    {
        fin >> i1 >> j1 >> i2 >> j2;
        Intrebari();
        q--;
    }
    return 0;
}
