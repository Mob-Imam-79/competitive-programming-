#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string s1 = "";
    string ans = "";

    for (auto ch : s)
    {
        if (s1 == ".")
        {
            ans += '0';
            s1 = "";
            s1 += ch;
        }
        else if (s1 == "-.")
        {
            ans += '1';
            s1 = "";
            s1 += ch;
        }
        else if (s1 == "--")
        {
            ans += '2';
            s1 = "";
            s1 += ch;
        }
        else
        {
            s1 += ch;
        }
    }

    if (s1 == ".")
    {
        ans += '0';
    }
    else if (s1 == "-.")
    {
        ans += '1';
    }
    else if (s1 == "--")
    {
        ans += '2';
    }

    cout << ans;
}