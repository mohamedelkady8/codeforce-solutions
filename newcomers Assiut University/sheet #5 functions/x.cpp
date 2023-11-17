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
    ll n , r , npr = 1 , mult = 1 , ncr;
    cin >> n >> r ;
    for (ll i = n; i >n-r ; i--)
    {
        npr *= i ;
    }
    for (ll i = r ; i > 1; i--)
    {
        mult *= i;
    }
    ncr = npr / mult ;
    cout << ncr << " " << npr ;
}
int main()
{
    _kady(); _solve();
}