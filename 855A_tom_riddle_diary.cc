#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    unordered_set<string> st;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (st.find(s) != st.end())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
            st.insert(s);
        }
    }

    return 0;
}
