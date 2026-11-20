#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--){

        int n;
        char ch;

        cin >> n;
        cin >> ch;

        

        string s;
        cin >> s;

        string s1 = s + s;

        if(ch == 'g'){
            cout<<0<<endl;
            continue;
        }

        int mx = 0;
        int pos = -1;
        for(int i = s1.size()-1; i >= 0; i--){
            if(s1[i] == 'g'){
                pos = i;
            }else if(s1[i] == ch && pos != -1){
                mx = max(mx,pos - i);
            }
        }
        cout<<mx<<endl;
        
    }
    return 0;
}