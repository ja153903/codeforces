#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    // minutes we have to complete the exam
    int m = 240 - k;

    int probs = 0;

    for (int i = 1; i <= n; i++)
    {
        m -= 5 * i;
        if (m >= 0)
            probs++;
        else
            break;
    }

    cout << probs << endl;

    return 0;
}
