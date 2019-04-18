#include <iostream>
#include <stdio.h>
using namespace std;

#define		sf		scanf
#define		pf		printf
#define		lld		long long

lld mmul(lld a, lld b, lld m) {
    a %= m;
    lld result = 0;
    while (b) {
        if (b % 2) result = (result + a) % m;
        a = (a + a) % m;
        b /= 2;
    }
    return result;
}

lld mpow(lld a, lld b, lld m) {
    a %= m;
    lld result = 1;
    while (b) {
        if (b % 2) result = mmul(result, a, m);
        a = mmul(a, a, m);
        b /= 2;
    }
    return result;
}


int main() {
	int tc,pos;
    lld a,b,c;
    sf ("%d",&tc);
    for (pos=1; pos<=tc; pos++)
    {
    	sf ("%lld %lld %lld",&a,&b,&c);
    	pf ("Case %d: %lld\n",pos,mpow(a,b,c));
    }
    return 0;
}
