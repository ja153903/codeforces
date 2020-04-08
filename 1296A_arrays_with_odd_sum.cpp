#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, even = 0, odd = 0;
        cin >> n;

        vector<int> vec(n, 0);

        for (int j = 0; j < n; j++)
        {
            cin >> vec[j];
            if (vec[j] % 2 == 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }

        if (odd % 2 == 1 || (odd > 0 && odd % 2 == 0 && even > 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
