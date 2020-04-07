#include <iostream>
#include <map>
#include <set>

using namespace std;

const map<string, string> INFINITY_STONES = {
    {"purple", "Power"},
    {"green", "Time"},
    {"blue", "Space"},
    {"orange", "Soul"},
    {"red", "Reality"},
    {"yellow", "Mind"}};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    set<string> seen;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        seen.insert(s);
    }

    int absent = 6 - seen.size();

    cout << absent << "\n";

    for (auto [key, value] : INFINITY_STONES)
    {
        if (seen.find(key) == seen.end())
        {
            cout << value << "\n";
        }
    }

    return 0;
}
