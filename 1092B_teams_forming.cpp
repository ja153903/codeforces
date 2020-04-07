#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> ps;

    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;

        ps.push_back(p);
    }

    sort(ps.begin(), ps.end());

    int pr = 0;

    for (int i = 0; i < ps.size(); i += 2)
    {
        pr += ps[i + 1] - ps[i];
    }

    cout << pr << "\n";

    return 0;
}
