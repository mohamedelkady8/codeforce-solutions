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
    string x , y ;
    ll t , s ;
    cin >> t ; 
    while (t--)
    {
        cin >> x >> y ;
        s = max(x.size() , y.size()) ;
    for (ll i = 0; i < s ; i++)
    {
        if (i < x.size())
        {
            cout << x.at(i) ;
        }
        if (i < y.size())
        {
            cout << y.at(i) ;
        } 
        
    }
    cout << endl ;
   }
}
int main()
{
    _kady(); _solve();
}