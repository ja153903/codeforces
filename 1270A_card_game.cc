#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, k1, k2;
        cin >> n >> k1 >> k2;

        int c1_max = -1;
        int c2_max = -1;

        for (int j = 0; j < k1; j++)
        {
            int c;
            cin >> c;

            c1_max = max(c1_max, c);
        }

        for (int j = 0; j < k2; j++)
        {
            int c;
            cin >> c;

            c2_max = max(c2_max, c);
        }

        if (c1_max > c2_max)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
