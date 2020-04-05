#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;

	// even rows have to print '#'
	// odd alternating rows print '#' and '.'
	bool alt_odd = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i % 2 == 0)
			{
				cout << "#";
			}

			if (i % 2 == 1)
			{
				if (j == m - 1 && !alt_odd)
				{
					cout << "#";
				}
				else if (!alt_odd)
				{
					cout << ".";
				}

				if (j == 0 && alt_odd)
				{
					cout << "#";
				}
				else if (alt_odd)
				{
					cout << ".";
				}
			}

		}

		cout << endl;

		if (i % 2 == 1)
		{
			alt_odd = !alt_odd;
		}
	}

	return 0;
}
