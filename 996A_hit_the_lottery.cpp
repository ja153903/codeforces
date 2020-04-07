#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int b = 0;

    while (n > 0)
    {
        while (n - 100 >= 0)
        {
            b++;
            n -= 100;
        }

        while (n - 20 >= 0)
        {
            b++;
            n -= 20;
        }

        while (n - 10 >= 0)
        {
            b++;
            n -= 10;
        }

        while (n - 5 >= 0)
        {
            b++;
            n -= 5;
        }

        while (n - 1 >= 0)
        {
            b++;
            n -= 1;
        }
    }

    cout << b << endl;

    return 0;
}