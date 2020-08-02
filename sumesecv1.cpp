#include <iostream>

using namespace std;

long long a[100005], n, m, st, dr, maxx = -100000, s, sum[100005];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        sum[i] = sum[i - 1] + a[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> st >> dr;
        if (st > dr)
        {
            swap(st, dr);
        }
        s = sum[dr] - sum[st - 1];

        if (s > maxx)
        {
            maxx = s;
        }
    }

    cout << maxx;
    return 0;
}