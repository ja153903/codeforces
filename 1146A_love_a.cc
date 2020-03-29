#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    int num_a = 0;
    int n = s.length();
    int half = n / 2;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
        {
            num_a++;
        }
    }

    if (num_a > half)
    {
        cout << n << endl;
    }
    else
    {
        int to_remove = 0;
        int rest = n - num_a;
        while (rest >= num_a)
        {
            to_remove++;
            rest--;
        }

        cout << n - to_remove << endl;
    }

    return 0;
}