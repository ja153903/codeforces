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
        int n;
        cin >> n;

        int odd = 0;
        bool even_found = false;
        int even_idx = -1;
        vector<pair<int, int>> vp;

        for (int j = 0; j < n; j++)
        {
            int ai;
            cin >> ai;

            if (!even_found && ai % 2 == 0)
            {
                even_idx = j + 1;
                even_found = true;
            }
            else if (ai % 2 == 1)
            {
                vp.push_back(make_pair(ai, j + 1));
                odd++;
            }
        }

        if (even_found)
        {
            cout << 1 << "\n"
                 << even_idx << "\n";
            continue;
        }

        if (vp.size() <= 1)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << 2 << "\n";
            cout << vp[0].second << " " << vp[1].second;
            cout << "\n";
        }
    }

    return 0;
}
