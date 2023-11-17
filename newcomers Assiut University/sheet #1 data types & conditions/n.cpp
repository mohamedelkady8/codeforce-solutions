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
    char x,z,v;
    cin>>x;
    ll y,a,b;
    y=x;
    a=y-32;
    b=y+32;
    z=b;
    v=a;
      if (y>=65&&y<=90)
    {
        cout<<z;
    }
    else if (y>=97&&y<=122)
    {
        cout<<v;
    }
    
}
int main()
{
    _kady(); _solve();
}
