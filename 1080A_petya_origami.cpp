#include <iostream>

using namespace std;

int f(int a, int n, int k);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int red, green, blue;

    red = f(2, n, k);
    green = f(5, n, k);
    blue = f(8, n, k);

    cout << red + green + blue << "\n";

    return 0;
}

int f(int a, int n, int k)
{
    if (a * n <= k)
    {
        return 1;
    }

    return a * n / k + ((a * n) % k == 0 ? 0 : 1);
}