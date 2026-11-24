#include <iostream>
using namespace std;

void rating(int raiting)
{
    if (raiting >= 1900)
        cout << "Division 1";
    else if (raiting <= 1899 && raiting >= 1600)
        cout << "Division 2";
    else if (raiting <= 1599 && raiting >= 1400)
        cout << "Division 3";
    else
        cout << "Division 4";
}

int main()
{
    int n, raiting;
    cin >> n;

    while (n--)
    {
        cin >> raiting;
        rating(raiting);
        cout << '\n';
    }
}