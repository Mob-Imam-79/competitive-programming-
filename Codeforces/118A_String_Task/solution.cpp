#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    string s;
    cin >> s;

    for(int i = s.size() - 1; i >= 0; i--){
        s[i] = tolower(s[i]);
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'){
            s.erase(s.begin() + i);
        }
    }

    string s1 = "";
    for(int i = 0; i < s.size(); i++){
        s1 += ".";
        s1 += s[i];
    }

    cout<<s1<<endl;
    return 0;
}