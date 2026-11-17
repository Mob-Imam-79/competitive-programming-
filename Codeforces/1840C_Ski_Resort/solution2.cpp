#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;

        long long total = 0;
        long long len = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x <= q)
            {
                len++;
            }
            else
            {
                if (len >= k)
                {
                    total += (1LL * (len - k + 1) * (len - k + 2)) / 2;
                }

                len = 0;
            }
        }

        if (len >= k)
        {
            total += (1LL * (len - k + 1) * (len - k + 2)) / 2;
        }

        cout << total << '\n';
    }

    return 0;
}