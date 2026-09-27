#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n; 

    int cnt = 0;

    while (n--) {
        string s;
        cin >> s;
        if(s[0] == 'T'){
            cnt += 4;
        }else if(s[0] == 'C'){
            cnt += 6;
        }else if(s[0] == 'O'){
            cnt += 8;
        }else if(s[0] == 'D'){
            cnt += 12;
        }else if(s[0] == 'I'){
            cnt += 20;
        }
    }
    cout << cnt;

    return 0;
}