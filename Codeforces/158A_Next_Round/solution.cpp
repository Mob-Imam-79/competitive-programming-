#include <bits/stdc++.h>
using namespace std;

int main() {


    int n;
    // cout<<"Enter total parti" << '\n';
    cin >> n;

    // cout<<"Enter K" << '\n';
    int k;
    cin >> k;

    int t = n;

    vector<int> arr;

    while (t--) {
        int p;
        cin >> p;
        arr.push_back(p);
    }

    int val = arr[k - 1];
    int count = 0;
    for (int x : arr) {
        if (x >= val && x > 0) {
            count++;
        }
    }

    vector<int>().swap(arr);
    cout << count << '\n';

    return 0;
}