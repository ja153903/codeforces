#include <iostream>
#define F(i, a, b) for (i = a; i < b; i++)

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::string s;
    std::cin >> s;

    int n = s.length();

    int count = 0;

    int i;
    F(i, 0, n)
    {
        if (s[i] == 'Q')
        {
            int j;
            F(j, i + 1, n)
            {
                if (s[j] == 'A')
                {
                    int k;
                    F(k, j + 1, n)
                    {
                        if (s[k] == 'Q')
                        {
                            count++;
                        }
                    }
                }
            }
        }
    }

    std::cout << count << "\n";

    return 0;
}
