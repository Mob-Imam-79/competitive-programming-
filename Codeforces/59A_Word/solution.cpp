#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    string s;
    cin >> s;
    
    int cl = 0;
    for(char ch : s){
        if(islower(ch))
        {
            cl++;
        }
    }
    int cu = s.size() - cl;

    bool CtL = false;
    if(cl >= cu){
        CtL = true;
    }

    string ans = "";
    for(char ch : s){
        if(CtL){
            ans += tolower(ch);
        }else{
            ans += toupper(ch);
        }
    }
    
    cout<<ans<<"";
    
    return 0;
}