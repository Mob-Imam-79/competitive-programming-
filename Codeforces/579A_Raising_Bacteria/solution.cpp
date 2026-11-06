#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int bact = 0;
    int y = n;

    while (y != 1)
    {
        if (y % 2 == 0)
        {
            y /= 2;
        }
        else
        {
            break;
        }
    }

    if (y == 1)
    {
        cout << 1;
        return 0;
    }

    int x = n;

    while (x != 0)
    {
        int cnt = 0;
        int num = x;

        while (num != 1)
        {
            num /= 2;
            cnt++;
        }

        x -= (1 << cnt);
        bact++;
    }

    cout << bact;

    return 0;
}