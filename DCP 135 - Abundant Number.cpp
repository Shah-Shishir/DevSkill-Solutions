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

const int MOD = 1000000007;
const int MAX = 320;
bool prime[MAX];
vector <int> v;

void sieve ()
{
    int i,j;

    v.pb(2);
    prime[0] = prime[1] = 1;

    for (i=4; i<MAX; i+=2)
        prime[i] = 1;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = 1;

    for (i=3; i<MAX; i+=2)
        if (!prime[i])
            v.pb(i);
}

U power (U b, U p)
{
    string str;
    U res = 1,len,i;

    while (p)
    {
        if (p & 1)
            str += "1";
        else
            str += "0";

        p >>= 1;
    }

    reverse (str.begin(),str.end());
    len = str.size();

    for (i=0; i<len; i++)
    {
        res *= res;

        if (str[i] == '1')
            res *= b;
    }

    return res;
}

U sdiv (U n)
{
    sieve ();

    U temp = n,i,sum = 1,k;

    for (i=0; v[i]*v[i]<=n; i++)
    {
        if (n % v[i] == 0)
        {
            k = 1;

            while (n % v[i] == 0)
            {
                ++k;
                n /= v[i];
            }

            sum *= (power(v[i],k)-1)/(v[i]-1);
        }
    }

    if (n > 1)
        sum *= (power(n,2)-1)/(n-1);

    return sum-temp;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    U tc,n,i,x,arr[1001],count,maxi,l,p;

    sf ("%u",&tc);

    while (tc--)
    {
        sf ("%u",&n);

        for (i=0; i<n; i++)
            sf ("%u",&arr[i]);

        sort (arr,arr+i);
        count = 0;
        vector <U> N,A;

        for (i=0; i<n; i++)
        {
            x = sdiv(arr[i]);

            if (x > arr[i])
            {
                ++count;
                N.pb(arr[i]);
                A.pb(x-arr[i]);
            }
        }

        if (count == 0)
            pf ("-1\n");
        else
        {
            maxi = A[0];
            p = 0;
            l = N.size();

            for (i=1; i<l; i++)
            {
                if (maxi < A[i])
                {
                    maxi = A[i];
                    p = i;
                }
            }

            pf ("%u %u\n",N[p],maxi);
        }
    }

    return 0;
}
