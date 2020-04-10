#include <iostream>
#include <set>
#include <vector>

#define F(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    std::vector<int> a(n);

    F(i, 0, n)
    {
        std::cin >> a[i];
    }

    int m;
    std::cin >> m;

    std::vector<int> b(m);

    F(i, 0, m)
    {
        std::cin >> b[i];
    }

    std::set<int> st;
    st.insert(a.begin(), a.end());
    st.insert(b.begin(), b.end());

    for (auto ai : a)
    {
        for (auto bi : b)
        {
            if (!st.count(ai + bi))
            {
                std::cout << ai << " " << bi << "\n";
                return 0;
            }
        }
    }

    return 0;
}
