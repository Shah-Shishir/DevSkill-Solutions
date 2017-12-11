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
    int t,pos;
    unsigned long long a,b,res;

    sf ("%d",&t);

    for (pos=1; pos<=t; pos++)
    {
        sf ("%llu %llu",&a,&b);

        res = (b-a)+1;

        pf ("Case %d: ",pos);

        if (a == b)
        {
            if (a == 1)
                pf ("Even\n");
            else
                pf ("Odd\n");
        }
        else
        {
            if (a == 1)
            {
                if (res & 1)
                    pf ("Even\n");
                else
                    pf ("Odd\n");
            }
            else
            {
                if (res & 1)
                    pf ("Odd\n");
                else
                    pf ("Even\n");
            }
        }
    }

    return 0;
}
