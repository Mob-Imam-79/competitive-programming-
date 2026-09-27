#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string s = "";
    while (n--)
    {
        string s;
        cin >> s;
        int i = 0;
        int j = 0;
        bool fg = true;
        while (i < 2)
        {
            if (s[j] == '0' && fg)
            {
                s.erase(j, 1);
                i++;
                j = -1;
                fg = false;
            }
            else if (s[j] == '1' && !fg)
            {
                s.erase(j, 1);
                i++;
                j = -1;
            }
            j++;
        }
        cout<<s<<endl;
    }

    return 0;
}