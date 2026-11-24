#include <iostream>
#include <algorithm>
using namespace std;

int middle (int a, int b, int c)
{
    return (a + b + c) - (max({a, b, c}) + min({a, b, c}));
}

int main()
{
    int t, a, b, c;
    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c;
        cout << (max({a, b, c}) - min({a, b, c}) == middle(a, b, c) ? "YES" : "NO") << endl;
    }
}