#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int numerator = 0;

    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        numerator += p;
    }

    printf("%f\n", (numerator / (100.0 * n) * 100.0));

    return 0;
}