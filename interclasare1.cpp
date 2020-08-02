#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("interclasare1.in");
ofstream fout("interclasare1.out");

int n, m, a[100005], b[100005], c[100005], k = 0;

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
    int i = 1, j = 1;
    while(i <= n && j <= m)
    {
        if(a[i] > b[j])
        {
            k++;
            c[k] = b[j];
            j++;
        }
        else if(a[i] < b[j])
        {
            k++;
            c[k] = a[i];
            i++;
        }
        else if(a[i] == b[j])
        {
            k++;
            c[k] = a[i];
            i++;
            j++;
        }
    }
    while(i <= n)
    {
        k++;
        c[k] = a[i];
        i++;
    }
    while(j <= m)
    {
        k++;
        c[k] = b[j];
        j++;
    }
    for(int i = 1; i <= k; i++)
    {
        fout << c[i] << " ";
        if(i % 10 == 0)
        {
            fout << "\n";
        }
    }
    fin.close();
    fout.close();
    return 0;
}
