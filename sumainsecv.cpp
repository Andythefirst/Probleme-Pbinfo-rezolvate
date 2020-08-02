#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin ("sumainsecv.in");
    ofstream fout("sumainsecv.out");
    int v[101],n,S,s=0,j=1,i;
    fin>>n>>S;
    for(int g=1;g<=n;++g)
    {
        fin>>v[g];
    }
    for(i=1;i<=n;++i)
    {
        s+=v[i];
        while(s>S)
        {
            s-=v[j];
            j++;
        }
    if(s==S)
    {
        break;
    }
    }
    fout<<j<<" "<<i;
    fin.close();
    fout.close();
    return 0;
}


