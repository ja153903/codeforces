#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    pair<int, int> ps[n];

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;

        ps[i] = make_pair(l, r);
    }

    int k;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        if (ps[i].first <= k && k <= ps[i].second)
        {
            cout << n - i << "\n";
            break;
        }
    }

    return 0;
}
