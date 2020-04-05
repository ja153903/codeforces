#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int e = 0;

    vector<int> h(n), a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> h[i] >> a[i];

        for (int j = 0; j < i; j++)
        {
            if (h[i] == a[j])
            {
                e++;
            }

            if (a[i] == h[j])
            {
                e++;
            }
        }
    }

    cout << e << "\n";
    return 0;
}
