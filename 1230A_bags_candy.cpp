#include <iostream>
#include <vector>

#define F(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::vector<int> v(4);
    F(i, 0, 4)
    {
        std::cin >> v[i];
    }

    std::vector<std::pair<int, int>> pairs{
        std::make_pair(0, 1),
        std::make_pair(0, 2),
        std::make_pair(0, 3)};

    std::vector<int> triples{0, 1, 2, 3};

    bool printed = false;

    // check pairs
    for (auto pair : pairs)
    {
        int _sum = 0;
        F(i, 0, 4)
        {
            if (i != pair.first && i != pair.second)
            {
                _sum += v[i];
            }
        }

        if (_sum == v[pair.first] + v[pair.second])
        {
            std::cout << "YES"
                      << "\n";
            printed = true;
            break;
        }
    }

    if (printed)
    {
        return 0;
    }

    // check triples
    for (auto triple : triples)
    {
        int _sum = 0;
        F(i, 0, 4)
        {
            if (i != triple)
            {
                _sum += v[i];
            }
        }

        if (_sum == v[triple])
        {
            std::cout << "YES"
                      << "\n";
            printed = true;
            break;
        }
    }

    if (!printed)
    {
        std::cout << "NO"
                  << "\n";
    }

    return 0;
}
