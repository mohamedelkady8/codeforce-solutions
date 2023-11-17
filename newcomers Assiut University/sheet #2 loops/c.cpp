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
    ll x ;
    cin>>x;
    ll a=0 ,b=0, c=0 ,d=0;
    while(x--)
    {
        ll y;
        cin>>y;
        if (y%2==0)
        {
            a++;
        }
        else if (y%2!=0)
        {
            b++;
        }
        if (y>0)
        {
            c++;
        }
        else if (y<0)
        {
            d++;
        }
    }
    cout<<"Even: "<<a<<"\n";
    cout<<"Odd: "<<b<<"\n";
    cout<<"Positive: "<<c<<"\n";
    cout<<"Negative: "<<d<<"\n";
}
int main()
{
    _kady(); _solve();
}