#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int r = 1;
    int ts = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b, c, d, s;
        cin >> a >> b >> c >> d;

        if (i == 0)
        {
            ts = a + b + c + d;
        }
        else
        {
            s = a + b + c + d;
            if (s > ts)
            {
                r++;
            }
        }
    }

    cout << r << "\n";

    return 0;
}
