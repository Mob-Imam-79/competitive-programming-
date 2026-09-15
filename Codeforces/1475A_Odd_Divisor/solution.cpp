// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;


int main() {

    int n;
    cin >> n;


    while (n--) {
       long long x; 
       cin >> x;
       while(x % 2 == 0){
            x /= 2;
       }
       if(x == 1) 
            cout<< "NO" << endl;
       else if(x > 1)
            cout<< "YES" << endl;
    }
    return 0;
}