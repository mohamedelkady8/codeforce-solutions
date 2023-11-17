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
ll power(ll x , ll y)
{
    ll  r = 1 ;
    while(y--)
    {
        r *= x;
    }
    
    return r ;
}
ll ans (ll c , ll d)
{
    ll sum = 0;
    for (ll i = 2; i <= d; i+=2)
    {
        sum += power(c,i) ;
    }
   return sum ; 
}
void _solve()
{
    ll c , d ;
    cin >> c >> d ;
    cout << ans(c,d);
}
int main()
{
    _kady(); _solve();
}