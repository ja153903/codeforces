#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s, v1, p1, v2, p2;
    cin >> s >> v1 >> v2 >> p1 >> p2;

    int b1 = 2 * p1 + (s * v1);
    int b2 = 2 * p2 + (s * v2);

    if (b1 == b2)
    {
        cout << "Friendship"
             << "\n";
    }
    else if (b1 < b2)
    {
        cout << "First"
             << "\n";
    }
    else
    {
        cout << "Second"
             << "\n";
    }

    return 0;
}
