#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // given these integers are >= 0, we can mark them as negative after we add the value
    int ar[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ar[i][j];
        }
    }

    int s = 0;

    // main diagonal - no need to check for negative value here since its the first one
    for (int i = 0; i < n; i++)
    {
        s += ar[i][i];
        ar[i][i] *= -1;
    }

    // secondary diagonal
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        if (ar[i][j] >= 0)
        {
            s += ar[i][j];
            ar[i][j] *= -1;
        }
    }

    // middle row
    for (int i = 0; i < n; i++)
    {
        if (ar[int(n / 2)][i] >= 0)
        {
            s += ar[int(n / 2)][i];
            ar[int(n / 2)][i] *= -1;
        }
    }

    // middle column
    for (int i = 0; i < n; i++)
    {
        if (ar[i][int(n / 2)] >= 0)
        {
            s += ar[i][int(n / 2)];
        }
    }

    cout << s << endl;

    return 0;
}
