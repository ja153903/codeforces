#include <iostream>

using namespace std;

#define LOOP(i, a, b) for (int i = a; i < b; i++)


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	LOOP(i, 0, t)
	{
		int n;
		cin >> n;

		string s;
		cin >> s;

		if (n < 11)
		{
			cout << "NO" << "\n";
		}
		else
		{
			// find out how many digits until 8
			int idx_eight = s.find("8");

			if (idx_eight == string::npos)
			{
				cout << "NO" << "\n";
			}
			else
			{
				int left = n - idx_eight;

				if (left < 11)
				{
					cout << "NO" << "\n";
				}
				else
				{
					if (left - 11 < 0)
					{
						cout << "NO" << "\n";
					}
					else
					{
						cout << "YES" << "\n";
					}
				}

			}
		}
	}

	return 0;
}
