#include <iostream>
#define F(i, a, b) for (i = a; i < b; i++)

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n, x;
    std::cin >> n >> x;

    long long d = 0, l = x;

    int i;
    F(i, 0, n)
    {
        char c;
        long long m;

        std::cin >> c >> m;

        if (c == '-')
        {
            if (l - m >= 0)
            {
                l -= m;
            }
            else
            {
                d++;
            }
        }
        else
        {
            l += m;
        }
    }

    std::cout << l << " " << d << "\n";

    return 0;
}
