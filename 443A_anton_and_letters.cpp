#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);

    unordered_set<char> st;

    for (char c : s)
    {
        if (isalpha(c))
        {
            st.insert(c);
        }
    }

    cout << st.size() << endl;

    return 0;
}
