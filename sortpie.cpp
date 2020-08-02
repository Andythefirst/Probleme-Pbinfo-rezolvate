#include <iostream>
#include <algorithm>

using namespace std;

int n, a[1005], b[1005];

bool PrimeIntreEle(int a, int b)
{
    int r;
    while(b)
    {
        r = a % b;
        a = b;
        b = r;
    }
    if(a == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int contor = 1;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n-1; i++)
    {
        if(PrimeIntreEle(a[i], a[n]))
        {
            b[contor] = a[i];
            contor++;
        }
    }
    sort(b+1,b+contor+1,cmp);
    for(int i = 1; i < contor; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}
