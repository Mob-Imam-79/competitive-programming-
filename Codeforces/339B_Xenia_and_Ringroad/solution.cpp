#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    long long time = 0;
    int prev = 1;

    while(m--){

        int x;
        cin >> x;

        if(prev <= x){
            time += (x - prev);
        }else{
            time += n +  x - prev;
        }
        prev = x;

    }
    cout << time << endl;
    return 0;
}