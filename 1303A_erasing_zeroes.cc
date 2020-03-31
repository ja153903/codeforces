#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        int n = s.length();
        int remove = 0;

        int one = s.find('1');
        int start = one;

        for (int j = one; j < n; j++)
        {
            if (s[j] == '1' && start != j)
            {
                remove += j - start - 1;
                start = j;
            }
        }

        cout << remove << "\n";
    }

    return 0;
}
