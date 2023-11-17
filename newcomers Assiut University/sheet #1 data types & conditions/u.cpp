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
    double x ,z ;
    ll y;
    cin>>x;
    y=x+0;
    z=x-y;
    if (z==0)
    {
        cout<<"int "<<y;
    }
    else{
        cout<<"float "<<y<<" "<<z;
    }

}
int main()
{
    _kady(); _solve();
}