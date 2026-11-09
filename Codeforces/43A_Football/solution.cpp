#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    map<string,int> mp;
    string s1 = "";
    string s2 = "";
    while(n--){
        string s;
        cin >> s;

        if(s1 == ""){
            s1 = s;
        }else if(s != s1 && s2 == ""){
            s2 = s;
        }
        if(mp[s] == 0){
            mp[s] = 0;
        }
        mp[s]++;
    }
    if(mp[s1] > mp[s2]){
        cout << s1;
        return 0;
    }
    cout << s2;
    return 0;
}