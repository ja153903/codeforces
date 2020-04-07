#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int s[n];

    string str;
    cin.ignore();
    getline(cin, str);

    istringstream iss(str);
    for (int i = 0; i < n; i++)
    {
        string num;
        iss >> num;

        s[stoi(num) - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        i == n - 1 ? cout << s[i] << endl : cout << s[i] << " ";
    }

    return 0;
}
