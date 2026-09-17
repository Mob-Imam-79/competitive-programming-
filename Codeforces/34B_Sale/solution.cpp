#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v;

    while(n--){
        int x;
        cin >> x;

        v.push_back(x);
    }

    sort(v.begin(),v.end());

    int sm = 0;
    for(int i = 0; i < m; i++){
        if(v[i] <= 0)
            sm += (-1 * v[i]);
    }
    
    cout<<sm;
    return 0;
}

