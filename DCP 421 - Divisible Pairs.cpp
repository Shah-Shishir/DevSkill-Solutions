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

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    llu tc,n,val,rem,i,j,arr[6],ans;

    sf ("%llu",&tc);

    while (tc--)
    {
        sf ("%llu",&n);
        memset (arr,0,sizeof(arr));

        while (n--)
        {
            sf ("%llu",&val);
            rem = val % 6;
            arr[rem]++;
        }

        i = arr[0]-1;
        i = (i*(i+1))/2;

        j = arr[3]-1;
        j = (j*(j+1))/2;

        ans = (arr[1]*arr[5])+(arr[2]*arr[4])+i+j;

        pf ("%llu\n",ans);
    }

    return 0;
}
