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
    ll t , x ;   
    cin >> t ;
    while (t--)
    {
        cin >> x ;
        ll y[x] ;
        for (ll i = 0; i < x; i++)
        {
            cin >> y[i] ;
        }
     ll max ;
    max = y[0];
    for(ll i = 0; i < x; i++)
    {
        if(y[i] > max)
        {
            max = y[i];
        }  
    }
    cout << max + 1<<endl ;
    }
    
}
int main()
{
    _kady(); _solve();
}