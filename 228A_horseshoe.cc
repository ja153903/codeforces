#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_set<int> st;

    for (int i = 0; i < 4; i++)
    {
        int s;
        cin >> s;

        st.insert(s);
    }

    cout << 4 - st.size() << endl;

    return 0;
}
