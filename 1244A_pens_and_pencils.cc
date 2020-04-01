#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
  	cin.tie(0);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
	    int a, b, c, d, k;
		cin >> a >> b >> c >> d >> k;

		// Need to take the ceil.
		int x = c >= a ? 1 : (a % c != 0 ? a / c + 1 : a / c);
		int y = d >= b ? 1 : (b % d != 0 ? b / d + 1 : b / d);

		if (x + y <= k)
		{
			cout << x << " " << y << "\n";
		}
		else
		{
			cout << -1 << "\n";
		}
	}

  	return 0;
}
