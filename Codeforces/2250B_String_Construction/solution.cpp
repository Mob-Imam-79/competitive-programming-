#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        string s1 = "";

        if (k + 1 <= n)
        {
            for (int i = 0; i < k + 1; i++)
            {
                s1 += '1';
            }

            for (int i = 0; i < n - (2 * k - 1); i++)
            {
                if (s1[s1.size() - 1] == '1')
                {
                    s1 += '0';
                }
                else if (s1[s1.size() - 1] == '0')
                {
                    s1 += '1';
                }
            }
             cout << s1 << endl;
        }else {
            cout << "-1" << endl;
        }

       
    }
}
