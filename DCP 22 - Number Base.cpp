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

int main (void)
{
    long long t,n,b,i,l,rem;
    char ch;

    sf ("%lld",&t);

    while (t--)
    {
        sf ("%lld %c %lld",&n,&ch,&b);

        if (n == 0)
            cout << 0 << endl;
        else
        {
            string str;

            while (n != 0)
            {
                rem = n % b;
                n /= b;

                if (rem >= 10)
                    str.pb(char(rem+55));
                else
                    str.pb(rem+'0');
            }

            reverse (str.begin(),str.end());

            l = str.size();

            for (i=0; i<l; i++)
                cout << str[i];

            cout << endl;
        }
    }

    return 0;
}
