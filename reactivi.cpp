#include <iostream>
#include <fstream>
#include <algorithm>
#define VMAX 8005
using namespace std;

ifstream fin("reactivi.in");
ofstream fout("reactivi.out");

struct reactiv {
    int min;
    int max;
};

bool compare(reactiv a, reactiv b)
{
    if (a.min == b.min)
        return a.max > b.max;
    return a.min < b.min;
}

reactiv v[VMAX];

int main()
{
    ifstream fin("reactivi.in");
    int n, ans = 1;
    fin >> n;
    for (int i = 0; i < n; i++)
    {
        fin >> v[i].min >> v[i].max;
    }
    sort(v, v + n, compare);
    int min = v[0].min;
    int max = v[0].max;
    for (int i = 1; i < n; i++)
    {
        if (v[i].max < max)
        {
            min = v[i].min;
            max = v[i].max;
        }
        else if (v[i].min <= max && v[i].max > max)
            min = v[i].min;
        else if (v[i].min > max)
        {
            ans++;
            min = v[i].min;
            max = v[i].max;
        }
    }
    fout << ans;
}
