#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    // Given M always starts
    // we can just give him the win if the number generated is even
    if (n % 2 == 0)
    {
        cout << "Mahmoud" << endl;
        return 0;
    }

    bool m_win = false;

    for (int t = 1; n > 0; t++)
    {
        if (t % 2 == 1)
        {
            // mahmoud's turn
            if (n % 2 == 0)
            {
                n = 0;
                m_win = true;
            }
            else
            {
                // if the value is odd and the next best even value is 0
                // then we've lost
                if (n - 1 == 0)
                {
                    m_win = false;
                }
                else
                {
                    n -= (n - 1);
                }
            }
        }
        else
        {
            if (n % 2 == 1)
            {
                n = 0;
                m_win = false;
            }
            else
            {
                n -= (n - 1);
            }
        }
    }

    m_win ? cout << "Mahmoud" : cout << "Ehab";
    cout << endl;

    return 0;
}