#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    vector<string> s_vec;
    vector<string> t_vec;

    string s_str, t_str;

    cin.ignore();
    getline(cin, s_str);
    getline(cin, t_str);

    istringstream s_iss(s_str);

    for (string s; s_iss >> s;)
    {
        s_vec.push_back(s);
    }

    istringstream t_iss(t_str);

    for (string t; t_iss >> t;)
    {
        t_vec.push_back(t);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int year;
        cin >> year;

        int s_idx = (year - 1) % s_vec.size();
        int t_idx = (year - 1) % t_vec.size();

        cout << s_vec[s_idx] << t_vec[t_idx] << endl;
    }

    return 0;
}