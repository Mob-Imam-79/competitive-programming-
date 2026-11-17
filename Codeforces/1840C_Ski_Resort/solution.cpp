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

        vector<vector<int>> ans;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x <= q)
            {
                v.push_back(x);
            }
            else
            {
                if (!v.empty())
                {
                    ans.push_back(v);
                    v.clear();
                }
            }
        }

        if (!v.empty())
        {
            ans.push_back(v);
        }

        for (int i = (int)ans.size() - 1; i >= 0; i--)
        {
            if (ans[i].size() < k)
            {
                ans.erase(ans.begin() + i);
            }
        }

        long long total = 0;

        for (int i = 0; i < ans.size(); i++)
        {
            long long len = ans[i].size();

            if (len >= k)
            {
                total += (1LL * (len - k + 1) * (len - k + 2)) / 2;
            }
        }

        cout << total << '\n';
    }

    return 0;
}