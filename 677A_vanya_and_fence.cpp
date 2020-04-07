#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h, res = 0;
    cin >> n >> h;

    for (int i = 0; i < n; i++)
    {
        int hs;
        cin >> hs;

        if (hs > h)
        {
            res += 2;
        }
        else
        {
            res++;
        }
    }

    cout << res << endl;

    return 0;
}