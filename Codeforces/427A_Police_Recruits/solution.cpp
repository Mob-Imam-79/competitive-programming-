#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;

    int off = 0;
    int cnt = 0;
    while(n--){
        int x;
        cin >> x;

        if(x > 0){
            if(x > 10) x = 10;
            off += x;
        }else{
            if(off > 0){
                off += x;
            }else{
                cnt++;
            }
        }
    }
    cout<< cnt;
    return 0;
}