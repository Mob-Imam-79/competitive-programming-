#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        vector<int> pref(n+1,0);
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            char ch;
            cin >> ch;
            if(ch == 'B'){
                pref[i] = pref[i-1] + 1;
            }else{
                pref[i] = pref[i-1];
            }
        }
        int mx = 0;
        for(int i = 0; i < pref.size() - k; i++){
            mx = max(mx,pref[i+k] - pref[i]);
           
        }
        cout<<k-mx<<endl;
    }

    return 0;
}