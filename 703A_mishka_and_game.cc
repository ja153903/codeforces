#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int m = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        int mr, cr;
        cin >> mr >> cr;

        if (mr == cr)
        {
            continue;
        }

        mr > cr ? m++ : c++;
    }

    if (m == c)
    {
        printf("Friendship is magic!^^\n");
    }
    else if (m > c)
    {
        printf("Mishka\n");
    }
    else
    {
        printf("Chris\n");
    }

    return 0;
}