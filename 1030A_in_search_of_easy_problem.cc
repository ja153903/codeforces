#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    bool is_hard = false;

    for (int i = 0; i < n; i++)
    {
        int resp;
        cin >> resp;

        if (resp == 1)
        {
            is_hard = true;
        }
    }

    is_hard ? cout << "HARD" << endl : cout << "EASY" << endl;

    return 0;
}