#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int total = 0;
    int _max = 0;

    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;

        total += b;
        _max = max(_max, b);
    }

    printf("%d\n", (_max * n) - total);

    return 0;
}