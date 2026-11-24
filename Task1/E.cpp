#include <iostream>
using namespace std;

int main()
{
    int n;
    string s = "codeforces";
    cin >> n;

    while (n--)
    {
        char c;
        cin >> c;
        bool flag = false;

        for (int i = 0; i < s.length(); i++)
        {

            if (c == s[i])
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
}