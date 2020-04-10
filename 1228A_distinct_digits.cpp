#include <iostream>
#include <unordered_set>

#define F(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;

bool is_unique(int n);

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int l, r;
    std::cin >> l >> r;

    bool printed = false;

    F(i, l, r + 1)
    {
        if (is_unique(i))
        {
            std::cout << i << "\n";
            printed = true;
            break;
        }
    }

    if (!printed)
    {
        std::cout << -1 << "\n";
    }

    return 0;
}

bool is_unique(int n)
{
    std::unordered_set<int> seen;

    while (n > 0)
    {
        if (seen.count(n % 10))
        {
            return false;
        }

        seen.insert(n % 10);
        n /= 10;
    }

    return true;
}