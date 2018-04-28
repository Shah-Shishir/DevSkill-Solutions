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
#define llu unsigned long long
#define lld long long
#define U unsigned int

long long power (long long n,long long p)
{
    long long res = 1;

    while (p--)
        res *= n;

    return res;
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/
    long long t,pos,len,n,i,num,p;
    string str;

    sf ("%lld",&t);

    for (pos=1; pos<=t; pos++)
    {
        cin >> str >> n;

        len = str.length();
        num = p =0;

        for (i=len-1; i>=0; i--)
            num += (str[i]-65) * power (10,p++);

        len = p = i = 0;

        while (1)
        {
            i = num/power (n,++p);

            if (i == 0)
                break;

            len += i;
        }

        pf ("Case %lld: %lld\n",pos,len);
    }

    return 0;
}
