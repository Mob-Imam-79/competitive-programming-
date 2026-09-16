#include <iostream>
#include <string>
using namespace std;


int main() {

    int n, m;
    cin >> n >> m;

    if(n >= m ){
        if((m  & 1) == 1){
            cout<<"Akshat";
        }else{
            cout<<"Malvika";
        }
    }else{
        if((n  & 1) == 1){
            cout<<"Akshat";
        }else{
            cout<<"Malvika";
        }
    }

    return 0;
}