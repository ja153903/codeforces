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
        int n, m;
        cin >> n >> m;

        int a[n];

        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            int g;
            cin >> g;

            a[j] = g;
            sum += g;
        }

        double average = sum * 1.0 / n;

        for (int j = m; j >= 0; j--)
        {
            double new_average = j * 1.0 / n;
            if (new_average <= average)
            {
                cout << j << "\n";
                break;
            }
        }
    }

    return 0;
}
