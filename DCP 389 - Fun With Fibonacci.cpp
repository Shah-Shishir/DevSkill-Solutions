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
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

pair <llu,llu> getVal (llu n)
{
    llu odd,even;

    if (n > 0 && n % 3 == 0)
        even = n/3;
    else if (n % 3 == 1)
        even = (n/3)+1;
    else
        even = (n+1)/3;

    odd = n-even;

    pair <llu,llu> p;
    p.first = odd, p.second = even;

    return p;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int tc,pos;
    llu n,m,a,b,c,d;

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
       sf ("%llu %llu",&n,&m);

        pair <llu,llu> p,q;

        p = getVal(n-1);
        q = getVal(m);

        a = p.first, b = p.second;
        c = q.first, d = q.second;

        pf ("Case %d:\nOdd = %llu\nEven = %llu\n",pos,c-a,d-b);
    }

    return 0;
}
