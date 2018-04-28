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

const int m = 100000007;
const int MAX = 1000005;

llu fact[1000001];

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    U tc,pos,n,i;

    fact[0] = fact[1] = 1;

    for (i=2; i<=1000000; i++)
        fact[i] = ((fact[i-1] % m) * (i % m)) % m;

    sf ("%u",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%u",&n);

        pf ("Case %u: %llu\n",pos,fact[n]);
    }

    return 0;
}
