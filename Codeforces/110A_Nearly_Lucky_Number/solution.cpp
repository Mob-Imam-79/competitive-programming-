#include <bits/stdc++.h>
using namespace std;

int main() {


    long long n;
    cin >> n;

    int cnt = 0;
    while(n != 0){
        int remin = n % 10;
        if( remin == 7 || remin == 4){
            cnt++;
        }
        n /= 10;
    }
    if( cnt == 7 || cnt == 4){
        cout<<"YES"; 
    }else{
        cout<<"NO";
    }

    return 0;

}