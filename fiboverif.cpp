#include <iostream>

using namespace std;

int main()
{
	int v[15];
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	for (int x = 1; x <= n; x++)
	{
		bool ok = 0;
		int a = 1, b = 1, c = 0;
		while (c <= v[x])
		{
			if (v[x] == 1)
			{
				cout << "DA \n";
				ok = 1;
				break;
			}
			c = a + b;
			if (v[x] == c)
			{
				cout << "DA \n";
				ok = 1;
				break;
			}
			a = b;
			b = c;

		}
		if (ok == 0)
		{
			cout << "NU \n";
		}
	}
	return 0;
	
}