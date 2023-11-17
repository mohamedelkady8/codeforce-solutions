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
    ll min , x , max;
    cin >> x ;
    ll y[x];
    for (ll i = 0; i < x; i++)
    {
        cin >> y[i];
    }
    min = y[0];
    for(ll i = 0; i < x; i++)
    {
        if(y[i] < min)
        {
            min = y[i];
        } 
    }
    min = y[0];
    for(ll i = 0; i < x; i++)
    {
        if(y[i] < min)
        {
            min = y[i];
        }
        
    }
    max = y[0];
    for(ll i = 0; i < x; i++)
    {
        if(y[i] > max)
        {
            max = y[i];
        }
        
    }
    cout << min << " " << max;
}
int main()
{
    _kady(); _solve();
}