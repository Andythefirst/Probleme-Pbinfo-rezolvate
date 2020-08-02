#include<iostream>

using namespace std;

int main()
{
    int n, i, k=0;
    cin>>n;
    int v[n*2];
    for(i=0; i<n; i++)
    {
        cin>>v[k];
        if(v[k]%2==0)
            {
                k++;
            }

        k++;
    }
    for(i=0; i<k; i++)
    {
        if(v[i]%2==0)
        {
            v[i+1]=v[i]*2;
            i++;
        }
    }
     for(i=0;i<k;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

