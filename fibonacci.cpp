#include <iostream>

using namespace std;


int main()
{
    int a=1,b=1,c,n;
    cin>>n;
    cout<<a<<" ";
    if(n>1)
    {
        cout<<b<<" ";
        for(int i=3;i<=n;i++)
        {
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
    }
    return 0;
}
