#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> ans(n+1);
    int i = 1;
    while (n--) {
        int pi;
        cin >> pi;

        ans[pi] = i++;
    }

    for(int i = 1; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    
    return 0;
}