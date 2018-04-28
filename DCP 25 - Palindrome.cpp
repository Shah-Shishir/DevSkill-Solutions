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
const int MAX = 1000005;

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    U tc,len,h,i;
    char str[101];
    bool k;

    sf ("%u",&tc);

    while (tc--)
    {
        sf ("%s",str);

        len = strlen(str);
        h = len/2;
        k = 1;

        for (i=0; i<len; i++)
            if (islower(str[i]))
                str[i] = toupper(str[i]);

        --len;

        for (i=0; i<=h; i++)
        {
            if (str[i] != str[len-i])
            {
                k = 0;
                break;
            }
        }

        if (!k)
            pf ("No\n");
        else
            pf ("Yes\n");
    }

    return 0;
}
