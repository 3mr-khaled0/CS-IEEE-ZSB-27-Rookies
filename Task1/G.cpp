#include <iostream>
using namespace std;

int main()
{
    int h, w, i1, j1, i2, j2;
    cin >> h >> w;

    char arr[h][w];

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool first = true;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (arr[i][j] == 'o' && first)
            {
                i1 = i;
                j1 = j;
                first = false;
            }

            else if (arr[i][j] == 'o' && !first)
            {
                i2 = i;
                j2 = j;
            }
        }
    }

    cout << abs(j2 - j1) + abs(i2 - i1);
}