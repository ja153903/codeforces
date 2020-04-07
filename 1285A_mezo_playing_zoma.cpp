#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int l = 0, r = 0;
    for (char c : s)
    {
        if (c == 'L')
        {
            l++;
        }
        else
        {
            r++;
        }
    }

    int lower_bound = -l;
    int upper_bound = r;

    cout << upper_bound - lower_bound + 1 << "\n";

    return 0;
}
