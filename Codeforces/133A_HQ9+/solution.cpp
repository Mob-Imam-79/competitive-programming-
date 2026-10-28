#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1;
    cin >> s1;

    bool found = false;
    for (char ch : s1)
    {
        if (ch == 'H' || ch == 'Q' || ch == '9')
        {
            cout << "YES";
            found = true;
            break;
        }
    }
    if (!found)
        cout << "NO";

    return 0;
}