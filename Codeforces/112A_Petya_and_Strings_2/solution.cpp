#include <bits/stdc++.h>
using namespace std;

int main() {

    string s1;
    cin >> s1;

    string s2;
    cin >> s2;
    
    char ch1;
    char ch2;

    string s3 = "";
    string s4 = "";
    int ans  = 0;

    for(char &ch : s1) {
        s3 += tolower(ch);
    }

    for(char &ch : s2) {
        s4 += tolower(ch);
    }
    
    if(s3 == s4){
        ans = 0;
    }else if(s3 > s4){
        ans = 1;
    }else{
        ans = -1;
    }
    
    cout << ans << "";

    return 0;

}