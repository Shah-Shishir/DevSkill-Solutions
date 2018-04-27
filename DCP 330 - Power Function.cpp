/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)

int main (void)
{
    int t,n,rem;
    double res;

    cin >> t;

    while (t--)
    {
        cin >> n;

        res = pow(2,n);

        if (n & 1)
            pf ("-");
        else
            pf ("+");

        while (res != 0)
        {
            if (res < 10)
            {
                rem = (int)res % 10;
                break;
            }

            res /= 10;
        }

        cout << rem << endl;
    }

    return 0;
}
