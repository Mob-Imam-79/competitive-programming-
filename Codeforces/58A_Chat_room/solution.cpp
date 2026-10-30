#include <iostream>
using namespace std;

int main()
{

   string s = "hello";

   string s1;
   cin >> s1;
   bool b1 = false;

   int i = 0, j = 0;
   while(i < s.size() && j < s1.size()){
        if(s[i] == s1[j]){
            i++;
            j++;
            b1 = true;
        }else{
            j++;
        }
   }

   if(i == s.size()){
    cout<<"YES";
   }else{
    cout<<"NO";
   }

    return 0;
}