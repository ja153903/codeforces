#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int d[n];
    map<int, int> c;

    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
        c[d[i]]++;
    }

    int z_c = 0;
    int o_c = 0;
    int doors = 0;

    for (int i = 0; i < n; i++)
    {
        if (d[i] == 0)
        {
            o_c++;
        }
        else
        {
            z_c++;
        }

        doors++;

        if (o_c == c[0] || z_c == c[1])
        {
            cout << doors << "\n";
            break;
        }
    }

    return 0;
}
