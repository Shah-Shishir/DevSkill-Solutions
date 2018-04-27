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
    int t,pos,len,i,val,count;
    string str;

    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        cin >> str >> val;

        len = str.size(), count = 0;

        if (val > len)
            val = len;

        for (i=0; i<val; i++)
        {
            if (str[i] != '9')
                str[i] = '9';
            else
                count++;
        }


        if (count > 0)
        {
            for (i=val; i<len; i++)
            {
                if (count == 0)
                    break;

                if (str[i] != '9')
                {
                    str[i] = '9';
                    count--;
                }
            }
        }

        pf ("Case %d: %s\n",pos,str.c_str());
    }

    return 0;
}