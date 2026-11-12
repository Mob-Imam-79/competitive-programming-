#include <bits/stdc++.h>
using namespace std;

int main(){

    int n , t;
    cin >> n >> t;

    vector<int> v(n+1,0);

    for(int i = 1; i < n; i++){
        int x;
        cin >> x;
        v[i] = x;
    }

    int ind = 1;
    while(ind <= n && ind <= t){
        if(ind == t){
            cout<<"YES";
            return 0;
        }else{
            ind += v[ind];
        }
    }

    cout<<"NO";
    return 0;
}