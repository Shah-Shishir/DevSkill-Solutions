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

int arr[100001];

bool isPrime (int n)
{
    if (n < 2 || n == 4 || n == 6 || n == 8 || n == 9)
        return false;
    else
        return true;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    int tc,n,i,t,rem,c=0;
    bool k;

    for (i=0; i<100001; i++)
    {
        t = i;
        k = false;

        while (t)
        {
            rem = t % 10;

            if (isPrime(rem))
            {
                k = true;
                ++c;
                break;
            }

            t /= 10;
        }

        if (k)
            arr[i] = arr[i-1]+1;
        else
            arr[i] = arr[i-1];
    }

    sf ("%d",&tc);

    while (tc--)
    {
        sf ("%d",&n);
        pf ("%d\n",arr[n]);
    }

    return 0;
}
