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
    ll a,b,c,d,l;
    cin>>a>>b>>c>>d;
    ll w,x,y,z;
    w=a%100;
    x=b%100;
    y=c%100;
    z=d%100;
    l=(w*x*y*z)%100;
    if(l<=9)
    {
        cout<<"0"<< l%100<<endl;
    }
    else
    {
        cout<<l%100<<endl;
    }    
}
int main()
{
    _kady(); _solve();
}