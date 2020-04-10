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
        int n, m;
        std::cin >> n >> m;

        if (n % m == 0)
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }

    return 0;
}
