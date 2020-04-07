#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int unattended = 0;
    int sem = 0;

    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;

        if (e > 0)
        {
            sem += e;
        }
        else
        {
            if (sem > 0)
            {
                sem--;
            }
            else
            {
                unattended++;
            }
        }
    }

    cout << unattended << endl;

    return 0;
}
