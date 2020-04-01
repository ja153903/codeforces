#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int c[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        c[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;

        for (int j = l; j <= r; j++)
        {
            c[j]++;
        }
    }

    // find out how many zeroes
    int z = 0;
    for (int i = 1; i < m + 1; i++)
    {
        if (c[i] == 0)
        {
            z++;
        }
    }

    if (z == 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << z << "\n";

        for (int i = 1; i < m + 1; i++)
        {
            if (c[i] == 0)
            {
                cout << i;

                if (i != m)
                {
                    cout << " ";
                }
            }
        }

        cout << "\n";
    }

    return 0;
}
