#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        for (char &c : s) {
        c = tolower(c);
        }

        if("yes" == s){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }

    }

    return 0;
}