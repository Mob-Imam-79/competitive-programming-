#include <bits/stdc++.h>
using namespace std;

int main() {


    string s1;
    cin >> s1;

    string s2;
    cin >> s2;
    
    string s3 = "";
    string s4 = "";
    int ans  = 0;

    for(char &ch : s1) {
        s3 += tolower(ch);
    }

    for(char &ch : s2) {
        s4 += tolower(ch);
    }
    
    sort(s3.begin(), s3.end());
    sort(s4.begin(), s4.end());
    
    cout << ans << "";

    return 0;

}