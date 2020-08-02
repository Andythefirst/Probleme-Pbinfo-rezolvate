#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere14.in");
ofstream fout("numere14.out");

int Numar(int x)
{
	int cn = x, cifre = 0;
	while (cn)
	{
		cn /= 10;
		cifre++;
	}
	cifre = cifre / 2 + 1;
	int uc;
	while (cifre)
	{
		uc = x % 10;
		x /= 10;
		cifre--;
	}
	if (uc % 2 != 0)
	{
		return uc;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int n, s = 0, a;
	fin >> n;
	for (int i = 0; i < n; i++)
	{
		fin >> a;
		s = s + Numar(a);
	}
	fout << s;
	return 0;
}