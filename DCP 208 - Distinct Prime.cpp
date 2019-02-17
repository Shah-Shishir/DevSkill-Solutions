/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_hoppe    int main (void)
#define bair_ho             return 0
#define sf                  scanf
#define pf                  printf
#define ssf                 sscanf
#define spf                 sprintf
#define fsf                 fscanf
#define fpf                 fprintf
#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase               sf ("%d",&tc)
#define sn                  sf ("%d",&n)
#define whilecase           while (tc--)
#define eof                 while (cin >> n)
#define forloop             for (pos=1; pos<=tc; pos++)
#define arrayloop           for (i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define pcase               pf ("Case %d: ",pos)
#define vi                  vector <int>
#define si                  set <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
#define llu                 unsigned long long
#define lld                 long long
#define U                   unsigned int
#define endl                "\n"

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

const int MAX = 10000100;
bool prime[MAX];
vector <U> v;

void sieve ()
{
    U i,j;

    v.pb(2);

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<=MAX; j+=2*i)
                prime[j] = true;

    for (i=3; i<=MAX; i+=2)
        if (!prime[i])
            v.pb(i);
}

int main (void)
{
    sieve ();

    llu t,n,i,len,l,a;

    sf ("%llu",&t);

    while (t--)
    {
        sf ("%llu",&n);

        vector <U> f;

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
                int p,j;
                bool k = true;

                p = upper_bound(v.begin(),v.end(),a)-v.begin();
                --p;

                for (i=p,j=0; j<l; i++,j++)
                {
                    if (v[i] != f[j])
                    {
                        k = false;
                        pf ("No");
                        break;
                    }
                }


                if (k)
                    pf ("Yes");

                pf ("\n");
            }
        }
    }

    return 0;
}
