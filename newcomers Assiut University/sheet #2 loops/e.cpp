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
    ll x , z=0;
    cin>>x;
    while (x--)
    {
        ll y;
        cin>>y;
        if (y>z)
        {
           z=y ;
        }
    }
    cout<<z;
}
int main()
{
    _kady(); _solve();
}