#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int h, w, k;
    cin >> h >> w >> k;

    int gilded = 0;

    for (int i = 1; i <= k; i++)
    {
        gilded += 2 * h + 2 * w - 4;
        h -= 4;
        w -= 4;
    }

    cout << gilded;

    return 0;
}
