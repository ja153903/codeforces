#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int prev = 0;
    int groups = 0;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;

        if (prev != m)
        {
            groups++;
        }

        prev = m;
    }

    printf("%d\n", groups);

    return 0;
}