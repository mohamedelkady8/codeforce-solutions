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
    bool flag ;
    cin >> x ;
    ll y[x] ;
    for (ll i = 0; i < x; i++)
    {
        cin >> y[i];
    }
    for (ll i = x-1 , j =0; j <= i ; i-- , j++  )
    {
       if (y[i] == y[j])
       {
        flag = true;
       }
       else
       {
        flag = false ;
        break;
       }
       
    }
    
    if (flag)
    {
        cout << "YES" ;
    }
    else 
    {
        cout << "NO" ;
    }
    
}
int main()
{
    _kady(); _solve();
}