#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    printf("%d %d\n", min(a, b), abs(a - b) / 2);

    return 0;
}