#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int m[n][n];

    for (int i = 0; i < n; i++)
    {
        m[0][i] = 1;
        m[i][0] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            m[i][j] = m[i - 1][j] + m[i][j - 1];
        }
    }

    printf("%d\n", m[n - 1][n - 1]);

    return 0;
}