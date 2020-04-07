#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a, b, c;
    cin >> a >> b >> c;

    long long m = 2 * c;
    long long _min = min(a, b);

    m += 2 * _min;
    a -= _min;
    b -= _min;

    if (a > 0)
    {
        m++;
    }

    if (b > 0)
    {
        m++;
    }

    cout << m << "\n";

    return 0;
}
