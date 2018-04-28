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

const int MAX = 10000001;
bool prime[MAX];
vector <unsigned int> v;

void sieve ()
{
    unsigned int i,j;

    prime[0] = prime[1] = true;

    v.pb(2);

    for (i=4; i<=MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
    {
        if (!prime[i])
        {
            v.pb(i);

            for (j=i*i; j<=MAX; j+=2*i)
                prime[j] = true;
        }
    }

    for (i=3163; i<=MAX; i+=2)
        if (!prime[i])
            v.pb(i);

    return;
}

int main (void)
{
    unsigned long long t,n,i,len,l,a;

    sieve ();

    sf ("%llu",&t);

    while (t--)
    {
        sf ("%llu",&n);

        vector <unsigned int> f;

        if (n == 1)
            pf ("No\n");
        else
        {
            for (i=0; v[i]*v[i]<=n; i++)
            {
                if (n % v[i] == 0)
                    f.pb(v[i]);

                while (n % v[i] == 0)
                    n /= v[i];
            }

            if (n > 2)
                f.pb(n);

            len = v.size(), l = f.size(), a = f[0];

            if (l == 1)
                pf ("Yes\n");
            else
            {
                int pos,j;
                bool k = true;

                for (i=0; i<len; i++)
                {
                    if (a == v[i])
                    {
                        pos = i;
                        break;
                    }
                }

                for (i=pos+1,j=1; i<len,j<l; i++,j++)
                {
                    if (v[i] != f[j])
                    {
                        k = false;
                        break;
                    }
                }

                if (k == true)
                    pf ("Yes\n");
                else
                    pf ("No\n");
            }
        }
    }

    return 0;
}
