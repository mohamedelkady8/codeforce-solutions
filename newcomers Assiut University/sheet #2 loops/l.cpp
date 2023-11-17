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
    ll x , y , z;
    
     cin >> x >> y;
     if(x == y )
     {
        cout <<x;
     }
     else 
     {
     for (ll i = 1; i < max(x,y) ; i++)
     {
        if(x % i == 0 && y % i == 0)
        {
            z=i;

        }
     }
     cout << z;
     }
}   
int main()
{
    _kady(); _solve();
}