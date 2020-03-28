#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    string travel;
    cin >> travel;

    char prev = travel[0];
    int seattle_to_sf = 0;
    int sf_to_seattle = 0;

    for (int i = 1; i < n; i++)
    {
        if (prev == 'S' && travel[i] == 'F')
        {
            seattle_to_sf++;
        }
        else if (prev == 'F' && travel[i] == 'S')
        {
            sf_to_seattle++;
        }

        if (prev != travel[i])
        {
            prev = travel[i];
        }
    }

    seattle_to_sf > sf_to_seattle ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}