#include <iostream>
using namespace std;

int main()
{

   int n;
   cin >> n;
   if(n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47  == 0|| n % 74 == 0 ||  n % 77 == 0 || n % 444 == 0|| n % 447 == 0 || n % 474 == 0|| n % 477 == 0|| n % 744 == 0|| n % 747 == 0 || n % 774 == 0|| n % 777 == 0){
        cout<<"YES";
        return 0;
   }

   while(n != 0){
        int remin = n % 10;
        if(remin != 4 && remin != 7){
            cout<< "NO";
            return 0;
        }
        n = n / 10;
   }
   if(n == 0){
        cout<<"YES";
        return 0;
   }

    return 0;
}