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
    ll x ;
    cin >> x;
    ll y [x] ;
    for (ll i = 0; i < x; i++)
    {
        cin >> y[i];
    }
     ll holder = y[0];
    for (ll i = 0; i < x; i++)
    {
        if (holder > y[i])
        {
            holder = y[i];
        }
    }
    ll counter = 0;
    for (ll i = 0; i < x; i++)
    {
        if (y[i] == holder)
        {
            counter ++ ;
        }
    }
    if (counter % 2 != 0)
    {
        cout << "Lucky" ;
    }
    else
    {
        cout << "Unlucky" ;
    }
    
}
int main()
{
    _kady(); _solve();
}