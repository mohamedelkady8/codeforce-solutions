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
    int x , y , z ;
    ll a , b , c , d , e , f;
    cin >> x ;
    cin >> y ;
    cin >> z ;
    c = x * y * z ;
    e = x + y + z ;
    b = x * (y+z) ;
    d = (x+y) * z ;
    a = x + y * z ;
    f = x * y + z ;
   cout << max ({a,b,c,d,e,f});
}
int main()
{
    _kady(); _solve();
}