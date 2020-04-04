#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;

	bool to_upper = false;
	int upper = 0;
	int lower = 0;

	for (auto c: s)
	{
		if (isupper(c))
		{
			upper++;
		}

		if (islower(c))
		{
			lower++;
		}
	}

	to_upper = upper > lower;

	for (auto c : s)
	{
		if (to_upper)
		{
			cout << char(toupper(c));
		}
		else
		{
			cout << char(tolower(c));
		}
	}

	cout << endl;

	return 0;
}

