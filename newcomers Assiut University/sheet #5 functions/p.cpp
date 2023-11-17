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
string binary (ll x )
{
     string y ;
    while (x != 0)
    {
        if (x % 2 == 0)
        {
            y+= "0";
        }
        else
        {
            y += "1" ;
        }
        x /=2 ;
    }
   reverse(y.begin(),y.end());
   return y ;
}
void _solve()
{
    ll t , n ;
    cin >> t ; 
    while (t--)
    {
        cin >> n ; 
        cout << binary(n )<< endl;
    }
    
}
int main()
{
    _kady(); _solve();
}