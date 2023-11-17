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
int sum(int x , int y)
{
    return x + y ;
}
void _solve()
{
    ll a , b ;
    cin >> a >> b ;
    cout << sum(a,b) ;
}
int main()
{
    _kady(); _solve();
}