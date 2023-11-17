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
    string x ; 
    cin >> x ; 
    ll y = 0 ; 
    for (ll i = 0; i < x.size(); i++)
    {
        y = y + (x[i] - '0');
    }
    cout << y ;

    
}
int main()
{
    _kady(); _solve();
}