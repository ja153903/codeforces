#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int f = 0;

    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;

        if (input == "Tetrahedron")
        {
            f += 4;
        }
        else if (input == "Cube")
        {
            f += 6;
        }
        else if (input == "Octahedron")
        {
            f += 8;
        }
        else if (input == "Dodecahedron")
        {
            f += 12;
        }
        else if (input == "Icosahedron")
        {
            f += 20;
        }
        else {
            f += 0;
        }
    }

    cout << f << endl;

    return 0;
}