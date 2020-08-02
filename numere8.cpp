#include <iostream>
#include <fstream>

using namespace std;

int fr[10005];

int main()
{
    ifstream fin("numere8.in");
    ofstream fout("numere8.out");
    int a;
    while (fin >> a)
    {
        if (a <= 9999)
        {
            fr[a] = 1;
        }
    }
    for (int i = 9999; i >= 1; i--)
    {
        if (fr[i] == 0)
        {
            fout << i << " ";
        }
    }
    return 0;
}