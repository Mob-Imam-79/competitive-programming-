#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        if (x == 1) {
            cout << 0 << '\n';
            continue;
        }

        int cnt2 = 0;
        int cnt3 = 0;

        while (x % 2 == 0) {
            cnt2++;
            x /= 2;
        }

        while (x % 3 == 0) {
            cnt3++;
            x /= 3;
        }

        if (x != 1) {
            cout << -1 << '\n';
            continue;
        }

        if (cnt2 > cnt3) {
            cout << -1 << '\n';
            continue;
        }

        int ans = cnt3 + (cnt3 - cnt2);

        cout << ans << '\n';
    }

    return 0;
}