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
ll mini(ll a , ll b , ll c , ll d , ll f)
{
    ll x , y , z ; 
    x = min(a , b) ;
    y = min(c , d) ; 
    z = min(x,y); 
    return min(z,f);
}
void _solve()
{
    string x ;
    cin >> x ; 
    ll e = 0, g = 0  , y = 0, p = 0 , t = 0 ; 
    for (ll i = 0; i < x.size(); i++)
    {
        if (x[i] == 'e' || x[i] == 'E')
        {
            e ++ ;
        }
        if (x[i] == 'g' || x[i] == 'G')
        {
            g ++ ;
        }
        if (x[i] == 'p' || x[i] == 'P')
        {
            p ++ ;
        }
        if (x[i] == 'y' || x[i] == 'Y')
        {
            y ++ ;
        }
        if (x[i] == 't' || x[i] == 'T')
        {
            t ++ ;
        }
    }
    cout << mini (e , g , y , p , t) ;
    
}
int main()
{
    _kady(); _solve();
}