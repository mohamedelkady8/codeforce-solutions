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
    ll a , b , c , d ;
    cin >> a >> b >> c >> d ;
    if (a+b-c==d||a+b*c==d||a-b+c==d||a-b*c==d||a*b+c==d||a*b-c==d)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
    
}
int main()
{
    _kady(); _solve();
}