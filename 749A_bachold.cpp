#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> primes;

    int n;
    cin >> n;

    int res = 0;

    while (n > 0 && n != 3)
    {
        res++;
        primes.push_back(2);
        n -= 2;
    }

    while (n == 3)
    {
        res++;
        primes.push_back(3);
        n -= 3;
    }

    cout << res << endl;

    for (int i = 0; i < primes.size(); i++)
    {
        if (i == primes.size() - 1)
        {
            cout << primes[i] << endl;
        }
        else
        {
            cout << primes[i] << " ";
        }
    }

    return 0;
}