#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        int n = s.length();

        if (s[n - 1] == 'o')
        {
            cout << "FILIPINO" << endl;
        }
        else if (s[n - 1] == 'u')
        {
            cout << "JAPANESE" << endl;
        }
        else if (s[n - 1] == 'a')
        {
            cout << "KOREAN" << endl;
        }
    }

    return 0;
}