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

bool isSq (llu n)
{
    double r = sqrt(n);

    if (r == (int)(r))
        return true;
    else
        return false;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    lld tc,n,i,a,b,m,d;

    sf ("%lld",&tc);

    while (tc--)
    {
        sf ("%lld",&n);

        if (isSq(n))
            pf ("0\n");
        else
        {
            m = 1e12;

            for (i=1; i*i<=n; i++)
            {
                if (n % i == 0)
                {
                    a = i;
                    b = n/i;
                    d = a-b;

                    if (d < 0)
                        d = -d;

                    if (d < m)
                        m = d;
                }
            }

            pf ("%lld\n",m);
        }
    }

    return 0;
}
