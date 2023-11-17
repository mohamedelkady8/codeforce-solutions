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
    ll t , y ;  
    string x ;
    cin >> t ; 
    while (t--)
    {
        cin >> x ; 
        y = x.size() ;
        if ( y > 10 )
        {
            cout << x.at(0) << y - 2 << x.at(y-1)<< endl;
        }
        else
        {
            cout << x << endl ;
        }
    }
     
}
int main()
{
    _kady(); _solve();
}