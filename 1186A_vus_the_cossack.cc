#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n, m, k;
    cin >> n >> m >> k;

    if (m > n || k > n)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

    return 0;
}