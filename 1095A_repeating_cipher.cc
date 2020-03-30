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

    for (int i = 0, j = 1; i < s.length(); i += j++)
    {
        cout << s[i];
    }

    cout << "\n";

    return 0;
}
