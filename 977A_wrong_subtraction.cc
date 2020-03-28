#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n, k;

    cin >> n >> k;

    while (k-- != 0)
    {
        n = n % 10 != 0 ? n - 1 : n / 10;
    }

    cout << n << endl;

    return 0;
}