#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        int mn = INT_MAX;
        if (k != 4)
        {
            bool b1 = true;
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;

                if (x % k == 0)
                {
                    b1 = false;
                }
                else
                {
                    mn = min(mn, k - (x % k));
                }
            }

            if (!b1)
                cout << 0 << endl;
            else
                cout << mn << endl;
        }
        else
        {
            int cnt = 0;
            bool b1 = true;

            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;

                if (x % 4 == 0)
                {
                    b1 = false;
                }

                if (x % 2 == 0)
                {
                    cnt++;
                }

                mn = min(mn, 4 - (x % 4));
            }

            if (!b1)
            {
                cout << 0 << endl;
            }
            else if (cnt == 0)
            {
                cout << min(2, mn) << endl;
            }
            else if (cnt == 1)
            {
                if (n == 1)
                    cout << mn << endl;
                else
                    cout << 1 << endl;
            }
            else if (cnt >= 2)
            {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}