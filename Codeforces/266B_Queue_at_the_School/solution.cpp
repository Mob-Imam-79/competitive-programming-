#include <bits/stdc++.h>
using namespace std;

int main() {

    int n , t;
    cin >> n >> t;

    string s;
    cin >> s;

    for(int j = 0; j < t; j++){
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    for(int i = 0; i < s.size(); i++){
        cout<< s[i];
    }
    
    return 0;
}