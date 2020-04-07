#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "I hate ";
        }
        else
        {
            cout << "I love ";
        }

        if (i + 1 != n)
        {
            cout << "that ";
        }
    }

    cout << "it";

    cout << endl;

    return 0;
}