#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    string s;
    cin >> s;

    string s1;
    cin >> s1;

    string s2 = s;

    reverse(s2.begin(),s2.end());

    if(s1 == s2){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}