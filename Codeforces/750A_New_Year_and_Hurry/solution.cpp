#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    int tl = 240;
    int n, t;
    cin >> n >> t;

    vector<int> v;
    int qt = 0;
    for (int i = 1; i <= n; i++)
    {
        qt += 5 * i;
        v.push_back(qt);
    }

    int th = qt + t;
    if (th <= tl)
    {
        cout << n;
        return 0;
    }

    int tar = tl - t;

    int l = 0, h = v.size() - 1;
    while (l <= h)
    {

        int mid = l + (h - l) / 2;
        if (v[mid] == tar)
        {
            cout << mid + 1;
            return 0;
        }
        else if (v[mid] < tar)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }

    cout << l;
    return 0;
}
