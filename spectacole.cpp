#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("spectacole.in");
ofstream fout("spectacole.out");

int n, t = -1000000, k;

struct spectacol
{
    int inceput, sfarsit;
}a[105];

bool cmp(spectacol a, spectacol b)
{
    return a.sfarsit < b.sfarsit;
}

int main()
{
    fin >> n;
    for(int i = 1; i <= n; i++)
    {
        fin >> a[i].inceput >> a[i].sfarsit;
    }
    sort(a + 1, a + n + 1, cmp);
    for(int i = 1; i <= n; i++)
    {
        if(a[i].inceput >= t)
        {
            k++;
            t = a[i].sfarsit;
        }
    }
    fout << k;
    return 0;
}
