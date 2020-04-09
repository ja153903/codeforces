#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        unordered_set<int> st;
        for (int i = 0; i < n; i++)
        {
            int ai;
            cin >> ai;
            st.insert(ai);
        }

        cout << st.size() << endl;
    }
    return 0;
}
