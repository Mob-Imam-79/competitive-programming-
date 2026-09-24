#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){

    int a;
    cin >> a;

    while(a--){

        int n;
        cin >> n;

        int ans = 0;
        int l = -1;
        int r = 0;
        while(n--){
            int x;
            cin >> x;

            if(x == 0  && r - l - 1 > 0){
                ans++;
            }
            if(x == 0){
                l = r;
            }
            r++;
        }
        if(r - l - 1 > 0){
            ans++;
        }
        cout << min(ans,2) << endl;
    }
    return 0;

}
