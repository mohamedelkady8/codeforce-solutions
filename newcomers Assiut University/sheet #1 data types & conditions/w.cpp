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
    ll a,c,e,f,g,h;
    char b,d;
    cin>>a>>b>>c>>d>>e;
    f=a+c;
    g=a-c;
    h=a*c;
if    ( e==f&&b=='+')
    {
       cout<<"Yes";
    }
else if (e==g&&b=='-')
    {
       cout<<"Yes";
    }
else if (e==h&&b=='*')
    {
       cout<<"Yes";
    }
else if (e!=f&&b=='+')
    {
       cout<<f;
    }
 else if (e!=g&&b=='-')
    {
       cout<<g;
    }
else if (e!=h&&b=='*')
    {
       cout<<h;
    }
}
int main()
{
    _kady(); _solve();
}