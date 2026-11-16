#include <bits/stdc++.h>
using namespace std;

int main() {

    int a , b;
    cin >> a >> b;

    int hr = 0;
    while(a != 0){
        int div = a / b;
        int remin = a % b;
        if(div == 0){
            hr += remin;
            break;
        }
        hr += div * b;
        a = remin + div;
    }

    cout<<hr<<endl;
 
    return 0;
}