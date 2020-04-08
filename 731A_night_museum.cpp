#include <iostream>
#include <vector>

using namespace std;

struct Itr
{
    int ord;
    int rev;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int rot = 0;
    char prev = 'a';

    vector<Itr> vec(26);

    for (int i = 0, j = -26; i <= 25; i++, j++)
    {
        Itr obj;
        obj.ord = i;
        obj.rev = j;

        vec[i] = obj;
    }

    string s;
    cin >> s;

    for (auto c : s)
    {
        auto obj = vec[(c - '0') - 49];
        auto prev_obj = vec[(prev - '0') - 49];
        rot += min(abs(prev_obj.ord - obj.ord),
                   min(abs(prev_obj.ord - obj.rev),
                       min(abs(prev_obj.rev - obj.ord),
                           abs(prev_obj.rev - obj.rev))));
        prev = c;
    }

    cout << rot << "\n";

    return 0;
}