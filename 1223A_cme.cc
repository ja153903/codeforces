#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int n;
        cin >> n;

        if (n > 2 && n % 2 == 0)
        {
            cout << 0 << endl;
        }
        else if (n % 2 == 0)
        {
            cout << 2 << endl;
        }
        else if (n % 2 == 1)
        {
            cout << 1 << endl;
        }
    }

    return 0;
}