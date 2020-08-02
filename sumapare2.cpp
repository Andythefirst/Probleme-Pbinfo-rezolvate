#include <iostream>

using namespace std;

int main()
{
    int a[100][100],n,m,s=0;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<m;x++)
        {
            cin>>a[i][x];
        }
    }
    for(int y=0;y<n;y++)
    {
        for(int z=0;z<m;z++)
        {
            if(a[y][z]%2==0)
            {
                s=s+a[y][z];
            }
        }
    }
    cout<<s;
    return 0;
}
