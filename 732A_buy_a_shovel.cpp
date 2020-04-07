#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, r;
    cin >> k >> r;

    int shovels = 0;

    for (shovels = 1; shovels < 10; shovels++)
    {
        if (shovels * k % 10 == 0 || (shovels * k - r) % 10 == 0)
        {
            break;
        }
    }

    cout << shovels << endl;

    return 0;
}
