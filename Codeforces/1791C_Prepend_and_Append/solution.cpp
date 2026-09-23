#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;

    while(n--){

        int t;
        cin >> t;

        string s;
        cin >> s;

        while((s[0] == '0' && s[s.size() - 1] == '1') || (s[0] == '1' && s[s.size() - 1] == '0')){
            s.erase(s.begin() + 0);
            s.erase(s.begin() + s.size() - 1);
        }

        cout<<s.size()<<endl;

    }
        
    return 0;
}