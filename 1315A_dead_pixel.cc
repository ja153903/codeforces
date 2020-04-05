#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        x++;
        y++;

        int shift_right = (a - x) * b;
        int shift_left = (x - 1) * b;
        int shift_up = a * (y - 1);
        int shift_down = a * (b - y);

        int _max = max(shift_left, max(shift_right, max(shift_up, shift_down)));

        cout << _max << "\n";
    }

    return 0;
}
