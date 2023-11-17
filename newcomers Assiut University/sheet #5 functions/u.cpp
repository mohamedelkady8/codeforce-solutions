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
    ll x , y  , sum = 0;
    cin >> x >> y ;
    ll z[x] ;
    for (ll i = 0; i < x; i++)
    {
        cin >> z[i] ; 
    }
    for (ll i = 1; i <= y; i++)
    {
        sum = sum + z[x-i];
    }
    cout << sum ;
}
int main()
{
    _kady(); _solve();
}