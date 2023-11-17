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
    ll t ; 
    cin >> t ; 
    while ( t--)
    {
        ll x ; 
        cin >> x ;

        ll y[x];

        for (ll i = 0; i < x; i++)
        {
            cin >> y[i] ; 
        }
          ll ans=INT_MAX;

        for (ll i = 0 ; i < x ; ++i )
        {
            for (ll  j = i+1 ; j<x ;++j)
            {
             ans = min ( ans ,  y[i] + y[j] + (j - i) );
            }
         }
         cout << ans << endl ;
    }
    
}
int main()
{
    _kady(); _solve();
}