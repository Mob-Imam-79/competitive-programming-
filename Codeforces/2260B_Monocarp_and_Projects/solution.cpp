#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        
        long long x , y , k;
        cin >> x >> y >> k;

        long long sm = 0;

        if( x >= y){ 
            cout << sm << endl;
            continue;
        }

        long long d = (y - x);

        while(x <= d && k--){
            sm += d % x;
            x++;
        }

        if(k > 0)
            sm += k * d;

        cout << sm << endl;


    }
}