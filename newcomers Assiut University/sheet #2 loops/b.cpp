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
    ll x; 
    cin>>x;
    for(ll i=1; i<=x;i++)
    {
        if (i%2==0)
        {
            cout<<i<<"\n";
        }

        else if (x<=1)
        {
          cout<<"-1";

        }
    }
}
int main()
{
    _kady(); _solve();
}