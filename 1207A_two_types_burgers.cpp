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
        int b, p, f, h, c;
        cin >> b >> p >> f;
        cin >> h >> c;

        if (b == 1)
        {
            cout << "0"
                 << "\n";
            continue;
        }

        int buns_available = b / 2;
        int profit = 0;

        int max_resource = h > c ? p : f;
        int min_resource = h < c ? p : f;

        int max_price = h > c ? h : c;
        int min_price = h < c ? h : c;

        if (buns_available >= max_resource)
        {
            buns_available -= max_resource;
            profit += max_resource * max_price;
        }
        else
        {
            profit += buns_available * max_price;
            buns_available = 0;
        }

        if (buns_available != 0 && buns_available < min_resource)
        {
            profit += min_price * buns_available;
        }
        else if (buns_available != 0)
        {
            profit += min_price * min_resource;
        }

        cout << profit << "\n";
    }

    return 0;
}
