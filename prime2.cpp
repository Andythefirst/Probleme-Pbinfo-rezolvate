#include <iostream>

using namespace std;

int n, a[1001], nr;

int NrPrime(int x)
{
    if(x < 2)
    {
        return false;
    }
    else
    {
        for(int d = 2; d * d <= x; d++)
        {
            if(x % d == 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        if(NrPrime(a[i]))
        {
            nr++;
        }
    }
    cout << nr;
    return 0;
}