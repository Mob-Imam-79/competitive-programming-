#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int zeros = 0, ones = 0;

        for (char c : s) {
            if (c == '0') zeros++;
            else ones++;
        }

        int i = 0;

        for (; i < s.size(); i++) {
            if (s[i] == '0' && ones > 0) {
                ones--;
            }
            else if (s[i] == '1' && zeros > 0) {
                zeros--;
            }
            else {
                break;
            }
        }

        cout << s.size() - i << endl;
    }

    return 0;
}