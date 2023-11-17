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
    ll x , y , z , a ;
    cin >> x >> y >> z ;
    a = z % 3 ;
    if (a == 1)
    {
        cout << x ;
    }
    else if (a == 2)
    {
        cout << y ;
    }
    else
    {
        cout <<  (x^y) ;
    }
    
}   
int main()
{
    _kady(); _solve();
}