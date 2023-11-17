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
    ll x,z;
    char y;
    cin>>x>>y>>z;
    if(y=='>'&& x>z)
    {
        cout<<"Right";
    }
    else if (y=='<'&& x<z)
    {
        cout<<"Right";
    }
    else if (y=='='&& x==z)
    {
        cout<<"Right";
    }
    else if(y=='>'&& x<=z)
    {
        cout<<"Wrong";
    }
    else if (y=='<'&& x>=z)
    {
        cout<<"Wrong";
    }
    else if (y=='='&& x!=z)
    {
        cout<<"Wrong";
    }
}
int main()
{
    _kady(); _solve();
}