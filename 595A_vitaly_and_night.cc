#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int lights = 0;

    for (int i = 0; i < n; i++)
    {
        int s[2 * m];
        for (int j = 0; j < 2 * m; j++)
        {
            cin >> s[j];
        }

        for (int j = 0; j < 2 * m; j += 2)
        {
            if (s[j] == 1 || s[j + 1] == 1)
            {
                lights++;
            }
        }
    }

    cout << lights << "\n";

    return 0;
}
