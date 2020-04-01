#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int s[n];

    for (int i = 0; i < n; i++)
    {
        int si;
        cin >> si;

        s[i] = si;
    }

    int groups = 0;
    map<int, int> count_by_group;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 1)
        {
            groups++;
        }
        count_by_group[groups]++;
    }

    std::cout << groups << "\n";

    for (int i = 1; i <= groups; i++)
    {
        if (i == groups)
        {
            std::cout << count_by_group[i] << "\n";
        }
        else
        {
            std::cout << count_by_group[i] << " ";
        }
    }

    return 0;
}
