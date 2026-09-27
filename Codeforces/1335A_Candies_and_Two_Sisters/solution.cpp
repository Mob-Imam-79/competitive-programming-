// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;


int main() {

    int n;
    cin >> n;


    while (n--) {
       int x; 
       cin >> x;
       if((x & 1) == 1){
        cout<< x/2 << endl;
       }else{
        cout<< x/2 - 1 << endl;
       }
    }
    return 0;
}