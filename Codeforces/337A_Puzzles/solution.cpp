#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<int> v;

    while(m--){
        int x;
        cin >> x;

        v.push_back(x);
    }
    sort(v.begin(),v.end());

    int mn = INT_MAX;
    for(int i = n-1, j = 0; i < v.size(); i++,j++){
        mn = min(mn,v[i] - v[j]);
    }

    cout<< mn;

    return 0;

}