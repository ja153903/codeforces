#include <iostream>
#define F(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int t;
    std::cin >> t;

    F(i, 0, t)
    {
        ll x, y, a, b;
        std::cin >> x >> y >> a >> b;

        ll t = (y - x) / (a + b);

        if ((y - x) % (a + b) == 0)
        {
            std::cout << t << "\n";
        }
        else
        {
            std::cout << -1 << "\n";
        }
    }
    return 0;
}
