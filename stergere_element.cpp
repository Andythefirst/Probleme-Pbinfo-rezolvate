#include<iostream>

using namespace std;

int main()
{
    int v[1501];
    int n,p;
    cin>>n>>p;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    for(int x=1;x<=n;x++)
    {
        if(x!=p)
        {
            cout<<v[x]<<" ";;
        }
    }

    return 0;
}
