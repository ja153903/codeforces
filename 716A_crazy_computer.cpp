#include <iostream>
#include <vector>
#define F(i, a, b) for (i = a; i < b; i++)

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n, c;
    std::cin >> n >> c;

    std::vector<int> v(n);
    int i;
    F(i, 0, n)
    {
        std::cin >> v[i];
    }

    int num_words = 1;
    int prev = v[0];

    F(i, 1, n)
    {
        if (v[i] - prev > c)
        {
            num_words = 1;
        }
        else
        {
            num_words++;
        }

        prev = v[i];
    }

    std::cout << num_words << "\n";

    return 0;
}
