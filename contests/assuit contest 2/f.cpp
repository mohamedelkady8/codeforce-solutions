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
    ll t , x; 
    cin >> t ;
    while (t--)
    {
        ll counter = 0 ;
        cin >> x;
        if (x % 2 == 0)
        {
            counter ++ ;
            x/=2 ;
        }
        cout << counter ;
    }
    
}
int main()
{
    _kady(); _solve();
}