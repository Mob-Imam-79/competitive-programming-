#include <bits/stdc++.h>
using namespace std;

int main() {

    int r , c;
    cin >> r >> c;
     
    int O1 = 1, O2 = 3;    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){

            if((i & 1) == 0){
                cout<< "#";
            }
            else{
                if(O1 == i && j == c-1){
                    cout<< "#";
                    O1 += 4;
                }else if(O2 == i && j == 0){
                    cout<< "#";
                    O2 += 4;
                }else{
                    cout<< ".";
                }
            }
        }
        cout<< "\n";
    }
    
    

    return 0;
}