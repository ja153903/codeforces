#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int p1 = 0, p2 = 0;
    int i = 0, j = n - 1, turn = 0;
    while (i <= j)
    {
        if (v[i] > v[j])
        {
            if (turn % 2 == 0)
            {
                p1 += v[i];
            }
            else
            {
                p2 += v[i];
            }
            i++;
        }
        else
        {
            if (turn % 2 == 0)
            {
                p1 += v[j];
            }
            else
            {
                p2 += v[j];
            }
            j--;
        }

        turn++;
    }

    cout << p1 << " " << p2 << endl;

    return 0;
}
