#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> size_g;

    string s;
    cin >> s;

    int gs = 0;

    for (int i = 0, contig_b = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            contig_b++;

            if (i == n - 1)
            {
                gs++;
                size_g.push_back(contig_b);
            }
        }
        else
        {
            if (contig_b > 0)
            {
                gs++;
                size_g.push_back(contig_b);
                contig_b = 0;
            }
        }
    }

    cout << gs << "\n";

    if (!size_g.empty())
    {
        for (int i = 0; i < size_g.size(); i++)
        {
            if (i == size_g.size() - 1)
            {
                cout << size_g[i] << "\n";
            }
            else
            {
                cout << size_g[i] << " ";
            }
        }
    }

    return 0;
}
