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

    int tc;
    string a,b;

    cin >> tc;

    while (tc--)
    {
        cin >> a >> b;

        if (a == "Dhaka")
        {
            if (b == "Chittagong")
                cout << 200 << endl;
            else if (b == "Rajshahi")
                cout << 300 << endl;
            else if (b == "Kathmandu")
                cout << 3200 << endl;
            else
                cout << 8200 << endl;
        }
        else if (a == "Chittagong")
        {
            if (b == "Dhaka")
                cout << 200 << endl;
            else if (b == "Rajshahi")
                cout << 500 << endl;
            else if (b == "Kathmandu")
                cout << 3000 << endl;
            else
                cout << 8000 << endl;
        }
        else if (a == "Rajshahi")
        {
            if (b == "Dhaka")
                cout << 300 << endl;
            else if (b == "Chittagong")
                cout << 500 << endl;
            else if (b == "Kathmandu")
                cout << 3500 << endl;
            else
                cout << 8500 << endl;
        }
        else if (a == "Kathmandu")
        {
            if (b == "Dhaka")
                cout << 3200 << endl;
            else if (b == "Chittagong")
                cout << 3000 << endl;
            else if (b == "Rajshahi")
                cout << 3500 << endl;
            else
                cout << 11000 << endl;
        }
        else
        {
            if (b == "Dhaka")
                cout << 8200 << endl;
            else if (b == "Chittagong")
                cout << 8000 << endl;
            else if (b == "Rajshahi")
                cout << 8500 << endl;
            else
                cout << 11000 << endl;
        }
    }

    return 0;
}
