#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int c = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if ((n - i) % i == 0)
        {
            c++;
        }
    }

    cout << c << endl;

    return 0;
}