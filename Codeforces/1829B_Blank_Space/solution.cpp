#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;

    while(n--){

        int t;
        cin >> t;

        int cnt = 0;
        int mx = 0;
        while(t--){

            int x;
            cin >> x;

            if(x == 0){
                cnt++;
            }else{
                mx = max(mx,cnt);
                cnt = 0;
            }
        }
        mx = max(mx,cnt);
        cout << mx << endl;
    }
}