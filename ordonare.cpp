#include <iostream>

using namespace std;

int main()
{
	int v[1001];
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	bool sortat;
	do
	{
		sortat = true;
		for (int i = 1; i <= n - 1; i++)
			if (v[i] > v[i + 1])
			{
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}
	} while (!sortat);
	for (int i=1; i <= n; i++)
	{
		cout << v[i] <<" ";
	}

	return 0;
}