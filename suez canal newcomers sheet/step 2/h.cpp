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
    ll x;
   cin >> x;
   ll y[46];
   y[0]=0, y[1]=1;
   for(ll i=2 ; i<=45 ; ++i )
   {
     y[i]=y[i-1]+y[i-2];
   }
   for(ll i=0 ; i<x ; ++i )
   {
     cout << y[i] << " ";
   }
}
int main()
{
    _kady(); _solve();
}