#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("secvk.in");
    ofstream fout("secvk.out");
    int n, a[100001], sum[100001], secv;
    fin >> n;
    fin >> secv;
    for(int i = 1; i <= n; i++)
    {
        fin >> a[i];
    }
    sum[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        sum[i] = sum[i-1] + a[i];
    }
    int s = 0;
    int dr = secv;
    int smax = 0;
    for(int i = secv + 1; i <= n; i++)
    {
        s = sum[i] - sum[i - secv];
        if(s > smax)
        {
            smax = s;
            dr = i;
        }
    }
    for(int i = dr - secv + 1; i <= dr; i++)
    {
        fout << a[i] << " ";
    }
    fin.close();
    fout.close();
    return 0;
}
