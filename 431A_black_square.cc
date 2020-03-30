#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int calo[4];

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    calo[0] = a;
    calo[1] = b;
    calo[2] = c;
    calo[3] = d;

    string s;
    cin >> s;

    int total_calos = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            total_calos += calo[0];
        }
        else if (s[i] == '2')
        {
            total_calos += calo[1];
        }
        else if (s[i] == '3')
        {
            total_calos += calo[2];
        }
        else if (s[i] == '4')
        {
            total_calos += calo[3];
        }
    }

    cout << total_calos << endl;

    return 0;
}