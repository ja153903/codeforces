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
        long long a, b, k;
        cin >> a >> b >> k;

        long long mul = k / 2;
        long long rem = k % 2;

        long long pos = mul * (a - b) + rem * a;

        cout << pos << "\n";
    }

    return 0;
}
