#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int count[4] = {0, 0, 0, 0};

    for (int i = 0; i < 4; i++)
    {
        cin >> count[i];
    }

    int n_256 = 0, n_32 = 0;
    while (count[0] > 0 && count[2] > 0 && count[3] > 0)
    {
        n_256++;
        count[0]--;
        count[2]--;
        count[3]--;
    }

    while (count[0] > 0 && count[1] > 0)
    {
        n_32++;
        count[0]--;
        count[1]--;
    }

    cout << n_256 * 256 + n_32 * 32 << endl;

    return 0;
}
