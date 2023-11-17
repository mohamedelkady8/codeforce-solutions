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
void repeat (ll x ,char y)
{
    for (ll i = 0; i < x; i++)
    {
        if (i != 0)
        {
            cout << " " ;
        }
        
         cout << y;
    }
    cout << endl ;
}
void _solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x ;
        char y ;
        cin >> x >> y ;
        repeat(x ,y);
    }
}
int main()
{
    _kady(); _solve();
}