#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A'){
            cnt++;
        }
    }
    int Dcnt = n - cnt;
    if(cnt > Dcnt){
        cout<<"Anton";
    }else if(cnt < Dcnt){
        cout << "Danik";
    }else{
        cout<<"Friendship";
    }

    return 0;

}