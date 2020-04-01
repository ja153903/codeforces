#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

	int rem = x % 4;
	
	// No need to do anything
	if (rem == 1)
	{
		cout << 0 << " " << "A\n";
	} else if (rem == 3)
	{
		cout << 2 << " " << "A\n";
	} else if (rem == 2)
	{
		cout << 1 << " " << "B\n";
	} else if (rem == 0)
	{
		cout << 1 << " " << "A\n";
	}

	return 0;
}
