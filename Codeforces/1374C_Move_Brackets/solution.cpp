#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;


int main(){

    int n;
    cin >> n;

    while(n--){
        
        int s;
        cin >> s;

        stack<int> st;
        while(s--){

            char ch;
            cin >> ch;

            if(ch == '('){
                st.push(ch);
            }
            else if(!st.empty() && ch == ')'){
                st.pop();
            }
        }
        cout << st.size() << endl;
    }
}