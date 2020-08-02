#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a[100005],b[100005],c[200010],n,m;
    ifstream fin ("interclasare.in");
    ofstream fout ("interclasare.out");

    fin>>n;
    for(int i=0; i<n; i++)
    {
        fin>>a[i];
    }
    fin>>m;
    for(int i=0; i<m; i++)
    {
        fin>>b[i];
    }
    int i=0,j=0,p=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[p ++]=a[i++];
        }
        else
        {
            c[p++]=b[j++];
        }
    }
    while(i<n)
    {
        c[p++]=a[i++];
    }
    while(j<m)
    {
        c[p++]=b[j++];
    }
    for(int i=0; i<n+m; i++)
    {
        fout<<c[i]<<" ";
        if(i%10==9)
        {
            fout<<"\n";
        }
    }
    return 0;
}
