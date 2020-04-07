#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    int ts = max(x1, max(x2, max(x3, x4)));

    vector<int> nums;

    if (ts - x1 > 0)
    {
        nums.push_back(ts - x1);
    }

    if (ts - x2 > 0)
    {
        nums.push_back(ts - x2);
    }

    if (ts - x3 > 0)
    {
        nums.push_back(ts - x3);
    }

    if (ts - x4 > 0)
    {
        nums.push_back(ts - x4);
    }

    for (int i = 0; i < 3; i++)
    {
        cout << nums[i];
        if (i + 1 != 3)
        {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}