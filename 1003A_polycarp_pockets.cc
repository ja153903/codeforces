#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    map<int, int> count;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        count[k]++;
    }

    int _max = -1;

    auto it = count.begin();

    while (it != count.end())
    {
        _max = max(_max, it->second);
        it++;
    }

    cout << _max << "\n";

    return 0;
}
