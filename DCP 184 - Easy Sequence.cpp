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
#define pb push_back
#define in insert

int main (void)
{
    long long t,n,i,a,b,sum;

    cin >> t;

    while (t--)
    {
        cin >> n;

        a = 1, b = 3;

        for (i=1; i<=n; i++)
        {
            if (i == n)
                cout << a << endl;

            sum = a+b;
            a = b;
            b = sum;
        }
    }

    return 0;
}
