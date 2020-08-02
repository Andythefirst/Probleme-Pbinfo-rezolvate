#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=1,b=1,c=0,s;
    cout<<a<<" "<<b<<" ";
    while(1)
    {
        c=a+b;
        if(c>n)
        {
            break;
        }
        cout<<c<<" ";
        a=b;
        b=c;


    }

    return 0;
}
