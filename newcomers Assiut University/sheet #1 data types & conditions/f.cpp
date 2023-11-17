#include <bits/stdc++.h>
using namespace std;
#define ll long long

void _kady()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}
void _solve()
{
   long long  a , b;
cin >> a >> b ;
long long c , d , e ;
c = a%10 ;
d = b%10 ;
e = c+d ;
cout<<e ;
}
int main()
{
    _kady(); _solve();
}