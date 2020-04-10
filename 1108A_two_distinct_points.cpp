#include <iostream>
#define F(i, a, b) for (int i = a; i < b; i++)

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int q;
    std::cin >> q;

    F(i, 0, q)
    {
        int l1, r1, l2, r2;
        std::cin >> l1 >> r1 >> l2 >> r2;

        int ai = std::min(l1, r1);
        int bi = ai == l2 ? r2 : l2;

        std::cout << ai << " " << bi << "\n";
    }

    return 0;
}
