#include <iostream>

using namespace std;

int main()
{
	int n, a[105] = { 0 }, perechi = 0, aux;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> aux;
		a[aux]++;
	}
	for (int i = 1; i <= 100; i++)
	{
		perechi = perechi + (a[i] / 2);
	}
	cout << perechi;
	return 0;
}