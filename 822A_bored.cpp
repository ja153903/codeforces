#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    long long x = 1;

    for (int i = 2; i <= min(a, b); i++)
    {
        x *= i;
    }

    cout << x << "\n";

    return 0;
}
