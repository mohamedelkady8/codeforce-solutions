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
    bool a = true ;
    cin >> x ;
    ll y[x] , z[x] ;
    for (ll i = 0; i < x; i++)
    {
        cin >> y[i] ;
    }
    for (ll i = 0; i < x; i++)
    {
        cin >> z[i];
    }
    
     sort(y, y + x);
     sort(z, z + x);
    
    for (ll i = 0; i < x; i++)
    {
        if (y[i] == z[i])
        {
            a = true ;
        }
        else
        {
            a = false ; 
            break;
        }
    }
    if (a == true)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    
    
    
}
int main()
{
    _kady(); _solve();
}