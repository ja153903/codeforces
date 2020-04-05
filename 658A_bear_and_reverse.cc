#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, c;
    cin >> n >> c;

    int ps[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ps[i];
    }

    int ts[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ts[i];
    }

    int ft = 0, rt = 0;
    int lim = 0, rad = 0;

    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        ft += ts[i];
        rt += ts[j];

        lim += max(0, ps[i] - c * ft);
        rad += max(0, ps[j] - c * rt);
    }

    if (lim == rad)
    {
        cout << "Tie\n";
    }
    else if (lim > rad)
    {
        cout << "Limak\n";
    }
    else
    {
        cout << "Radewoosh\n";
    }

    return 0;
}
