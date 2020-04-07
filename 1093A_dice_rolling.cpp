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
        int n;
        cin >> n;

        int count = 0;

        for (int i = 2; i <= 7 && n > 0; i++)
        {
            while (n - i >= 0)
            {
                count++;
                n -= i;
            }
        }

        cout << count << "\n";
    }

    return 0;
}
