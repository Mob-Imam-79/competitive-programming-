#include <iostream>
#include <string>    // Good practice to include this when using string
#include <algorithm> // Required for all_of
#include <cctype>    // Required for tolower/toupper

using namespace std;

int main()
{
   string s;
   cin >> s;

   if(s.size() == 0){
        cout<<"";
        return 0;
   }

   if(all_of(s.begin(), s.end(), ::isupper)){
        string s1 = "";
        for(int i = 0; i < s.size(); i++){
            s1 += tolower(s[i]);
        }   
        cout<<s1;
        return 0;
   }else if(all_of(s.begin(), s.begin() + 1, ::islower) && all_of(s.begin() + 1, s.end(), ::isupper)){
        string s1 = "";
        s1 += toupper(s[0]);
        for(int i = 1; i < s.size(); i++){
            s1 += tolower(s[i]);
        } 
        cout<<s1;
        return 0;
   }else{
        cout<<s;
   }
   
   return 0;
}
