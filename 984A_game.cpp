#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> vec;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        vec.push_back(ai);
    }

    sort(vec.begin(), vec.end());

    deque<int> deq(vec.begin(), vec.end());

    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0)
        {
            deq.pop_back();
        }
        else
        {
            deq.pop_front();
        }
    }

    cout << deq.front() << "\n";

    return 0;
}
