#include <iostream>
#include <string>    // Good practice to include this when using string
#include <algorithm> // Required for all_of
#include <cctype> 
#include <map>   // Required for tolower/toupper

using namespace std;

int main()
{
   
    int Pstg, n;
    cin >> Pstg >> n;
    
    vector<pair<int,int>> v;

    for(int i = 0; i < n; i++){

        int drg , bonus;
        cin >> drg >> bonus;

        v.push_back({drg,bonus});

    }

    sort(v.begin(),v.end());

    for(int i = 0; i < n; i++){
        if(v[i].first < Pstg){
            Pstg += v[i].second;
        }else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
