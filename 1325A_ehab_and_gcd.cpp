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
        int x;
        cin >> x;

        cout << "1"
             << " " << x - 1 << endl;
    }

    return 0;
}
