#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    bool can_play = false;

    char g_rank, g_suite;
    cin >> g_rank >> g_suite;

    for (int i = 0; i < 5; i++)
    {
        char rank, suite;
        cin >> rank >> suite;

        if (rank == g_rank || suite == g_suite)
        {
            can_play = true;
            break;
        }
    }

    can_play ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}