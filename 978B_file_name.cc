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

    int remove = 0;
    int len = s.length();

    for (int i = 0, contig_x = 0; i < len; i++)
    {
        if (s[i] == 'x')
        {
            contig_x++;

            if (i == len - 1 && contig_x >= 3)
            {
                remove += contig_x - 2;
            }
        }
        else
        {
            if (contig_x >= 3)
            {
                remove += contig_x - 2;
            }

            contig_x = 0;
        }
    }

    cout << remove << "\n";

    return 0;
}
