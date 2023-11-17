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
    for (ll i = x; i >= 1; --i)
    {
     for (ll j = 0;  i > j; ++j)
     {
        cout<<"*";
        
     }
     cout<<endl;
    }
    
    
}
int main()
{
    _kady(); _solve();
}