//CPP 
#include <bits/stdc++.h> 
using namespace std;
#define ull unsigned long long
int main() 
{ 
	ull a,b;
    cin >> a >> b;
   ull a1=a/10; ull a2=a%10;
   ull b1=b/10; ull b2=b%10;
   ull c2=a2+b2;
   ull r=c2%10;
   ull d=c2/10;
   ull e=a1+b1+d;
   if (e>0) cout << e;
   cout << r;
    return 0;
}
