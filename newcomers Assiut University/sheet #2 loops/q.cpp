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
    ll n , m ;
    while (1)
    {
        cin >> m >> n;
        if (n <= 0 || m <= 0)
        break;
        ll sum = 0 ;
        for (ll i = min(n,m); i <=  max(n,m); i++)
        {
            cout << i << " " ;
            sum += i;
            
        }
        cout << "sum =" << sum << endl; 
    }
}
int main()
{
    _kady(); _solve();
}