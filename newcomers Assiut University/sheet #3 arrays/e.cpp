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
    ll x ,pos = 0;
    cin >> x;
    ll y[x];
    for (ll i = 0; i < x; i++)
    {
        cin >> y[i];
    }
    ll min ;
    min = y[0];
    for(ll i = 0; i < x; i++)
    {
        if(y[i] < min)
        {
            min = y[i];
            pos = i;
        }  
    }
    cout << min << " " << pos+1 ;  
    
}
int main()
{
    _kady(); _solve();
}