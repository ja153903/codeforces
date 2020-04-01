#include <iostream>

using namespace std;

#define LOOP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    LOOP(i, 0, t)
    {
        int n, x, a, b;
        cin >> n >> x >> a >> b;

        int left = a > b ? b : a;
        int right = a > b ? a : b;

        while (x > 0)
        {
            if (left - 1 >= 1)
            {
                left--;
            }
            else if (right + 1 <= n)
            {
                right++;
            }

            x--;
        }

        cout << right - left << "\n";
    }

    return 0;
}
