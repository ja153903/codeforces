#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> rows;
    bool found = false;
    int idx_found = -1;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string row;
        cin >> row;

        if (!found && row.find("OO") != string::npos)
        {
            found = true;
            idx_found = i;
        }

        rows.push_back(row);
    }

    if (!found)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;

        for (int i = 0; i < rows.size(); i++)
        {
            if (i == idx_found)
            {
                int idx_match = rows[i].find("OO");
                for (int j = 0; j < rows[i].length(); j++)
                {
                    if (j == idx_match || j == idx_match + 1)
                    {
                        cout << "+";
                    }
                    else
                    {
                        cout << rows[i][j];
                    }
                }
                cout << endl;
            }
            else
            {
                cout << rows[i] << endl;
            }
        }
    }

    return 0;
}