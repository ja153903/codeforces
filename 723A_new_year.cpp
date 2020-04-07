#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    // strat is to meet in the middle
    vector<int> v{x1, x2, x3};
    sort(v.begin(), v.end());

    cout << v[1] - v[0] + v[2] - v[1] << endl;
    return 0;
}
