#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    string chars;
    cin >> chars;

    int ns = 0, zs = 0;

    for (int i = 0; i < chars.length(); i++)
    {
        if (chars[i] == 'n')
        {
            ns++;
        }

        if (chars[i] == 'z')
        {
            zs++;
        }
    }

    for (int i = 0; i < ns; i++)
    {
        cout << "1 ";
    }

    for (int i = 0; i < zs; i++)
    {
        i == zs - 1 ? cout << "0" : cout << "0 ";
    }

    cout << endl;

    return 0;
}