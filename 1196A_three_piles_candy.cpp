#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        long long _max = max(a, b);
        long long _min = min(a, b);

        long long needed = _max - _min;

        if (needed <= c)
        {
            c -= needed;
            _min += needed + c / 2;
        }
        else
        {
            _min += c;
            c = 0;

            if (_max - _min > 1)
            {
                _min += (_max - _min) / 2;
            }
        }

        cout << _min << "\n";
    }

    return 0;
}