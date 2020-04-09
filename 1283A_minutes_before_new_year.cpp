#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    int midnight = 24 * 60;

    // midnight would be 24 * 60 minutes
    for (int i = 0; i < t; i++)
    {
        int h, m;
        cin >> h >> m;

        cout << midnight - (h * 60 + m) << endl;
    }

    return 0;
}
