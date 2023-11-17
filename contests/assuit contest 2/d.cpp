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
    ll t , x , y  ; 
    cin >> t ;
    while (t--)
    {
        ll sum = 0 ;
        cin >> x >> y ; 
        for (ll i = x; i <= y; i++)
        {
            sum += i ;
        }
        cout << sum << endl ;
    }
    
}
int main()
{
    _kady(); _solve();
}