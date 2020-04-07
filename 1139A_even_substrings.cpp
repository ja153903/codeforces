#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int even_substr = 0;

    // time limit exceeded for the brute force algo
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         if ((s[j] - '0') % 2 == 0)
    //         {
    //             even_substr++;
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        if ((s[i] - '0') % 2 == 0)
        {
            even_substr += i + 1;
        }
    }

    cout << even_substr << "\n";

    return 0;
}
