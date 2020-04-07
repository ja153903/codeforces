#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int count = 0;

    while (n > 0)
    {
        while (n - 5 >= 0)
        {
            count++;
            n -= 5;
        }
        while (n - 4 >= 0)
        {
            count++;
            n -= 4;
        }
        while (n - 3 >= 0)
        {
            count++;
            n -= 3;
        }
        while (n - 2 >= 0)
        {
            count++;
            n -= 2;
        }
        while (n - 1 >= 0)
        {
            count++;
            n -= 1;
        }
    }

    cout << count << endl;

    return 0;
}