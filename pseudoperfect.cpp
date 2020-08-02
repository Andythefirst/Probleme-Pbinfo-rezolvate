#include <iostream>

using namespace std;

int main()
{
    int n,s=0;
    cin>>n;
    for(int d=1 ; d * d <= n ; d ++ )
    {
        if(n%d==0)
        {
            s=s+d;
            if(d * d < n)
            {
                s=s+n/d;
            }
        }
    }
    if(s%n==0)
    {
        cout<<"DA";
    }
    else
    {
        cout<<"NU";
    }
    return 0;
}
