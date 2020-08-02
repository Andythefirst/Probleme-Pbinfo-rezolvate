#include <iostream>

using namespace std;

int main()
{
    int a[100][100],n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        for(int y=0;y<m;y++)
        {
            cin>>a[i][y];
        }
    }
    for(int x=0;x<n;x++)
    {
        int s=0;
        for(int z=0;z<m;z++)
        {
            s=s+a[x][z];
        }
        cout<<s<<" ";
    }
    return 0;
}
