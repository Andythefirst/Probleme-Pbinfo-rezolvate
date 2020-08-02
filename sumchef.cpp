#include <iostream>

using namespace std;

int n, x, uc;
long long s;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        while(x)
        {
            uc = x % 10;
            s = s + uc * uc * uc;
            x = x / 10;
        }
    }
    cout << s;
    return 0;
}
