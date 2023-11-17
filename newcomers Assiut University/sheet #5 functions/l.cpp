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
    ll y[x] , z[x];
    for (ll i = 0; i < x; i++)
    {
        cin >> y[i];
    }
    for (ll j = 0; j < x; j++)
    {
        cin >> z[j];
    }
    for (ll j = 0; j < x; j++)
    {
        cout << z[j] << " ";
    }
    for (ll i = 0; i < x; i++)
    {
        cout << y[i] << " ";
    }
    
}
int main()
{
    _kady(); _solve();
}