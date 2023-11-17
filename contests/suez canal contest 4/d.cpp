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
    ll y[3];
    for (ll i = 0; i < 3; i++)
    {
        cin >> y[i] ;
    }
 for(ll i=0 ; i <3 ; ++i )
    {
        for(ll j=i; j < 3 ; ++j ) 
        {
            if( y[i]>y[j])
            { 
            swap(y[i], y[j]);
            } 
        }   
    }
    cout <<  (y[1] - y[0]) + (y[2] - y[1]);
    
        
} 
int main()
{
    _kady(); _solve();
}