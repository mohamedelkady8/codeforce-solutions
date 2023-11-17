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
ll GCD(ll a, ll b)
{
    return (!b ? a : GCD (b, a % b));
}

ll LCM (ll a, ll b)
{
    return a / __gcd(a, b) * b;
}
void _solve()
{
    ll x , y ;
    cin >> x >> y ;
    cout << GCD(x, y)<< " " <<LCM(x,y);
}
int main()
{
    _kady(); _solve();
}