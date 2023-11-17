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
    ll t ;
    cin >> t ;
    while (t--)
    {
        ll n , m , sum = 0 ;
        cin >> n >> m ;
        for (ll i = min(n,m) + 1; i < max(n,m); i++)
        {
        
            if(i % 2 != 0)
            {
                sum=sum+i;
            }
        }
        cout << sum << endl ;
    }
    
}
int main()
{
    _kady(); _solve();
}