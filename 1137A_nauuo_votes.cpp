#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y, z;
    cin >> x >> y >> z;

    if (x == y)
    {
        if (z > 0)
        {
            cout << "?"
                 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
    else if (x > y)
    {
        if (y + z >= x)
        {
            cout << "?"
                 << "\n";
        }
        else
        {
            cout << "+"
                 << "\n";
        }
    }
    else if (x < y)
    {
        if (x + z >= y)
        {
            cout << "?"
                 << "\n";
        }
        else
        {
            cout << "-"
                 << "\n";
        }
    }

    return 0;
}
