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
    int t,pos,len,i,sum;
    string str;

    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        cin >> str;

        len = str.size(), sum = 0;

        for (i=0; i<len; i++)
            if (isdigit(str[i]))
                sum += str[i] - '0';

        pf ("Case %d: %d\n",pos,3-(sum % 3));
    }

    return 0;
}
