#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int cnt = 1;
    int mx = 0;

    for(int i = 1; i < s.size(); i++){
        if(s[i] == '1' && s[i -1] == '1'){
            cnt++;
            mx = max(mx,cnt);
        }else if(s[i] == '0' && s[i -1] == '0'){
            cnt++;
            mx = max(mx,cnt);
        }else{
            mx = max(mx,cnt);
            cnt = 1;
        }
        
    }
    
    if(mx >= 7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;

}