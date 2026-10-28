#include <bits/stdc++.h>
using namespace std;

int main() {


    int n;
    // cout<<"Enter total parti" << '\n';
    cin >> n;


    int t = n;


    int mxPas = 0;
    int mx = 0;
    while (t--) {

        int out;
        cin >> out;

        mxPas -= out;

        int in;
        cin >> in;

        mxPas += in;
        mx = max(mx,mxPas);
    }

    cout << mx << '\n';

    return 0;
}