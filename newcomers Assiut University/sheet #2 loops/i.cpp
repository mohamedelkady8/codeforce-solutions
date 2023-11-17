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
    ll y, x ,l , z= 0;
    cin>> y; 
    x= y;
    while (y != 0)
    {
        l = y % 10;
        z= z * 10 + l ;
        y /= 10 ;
    }
    cout << z;
    if (z == x)
    {
        cout<< endl <<"YES";
    }
    else
    {
        cout<< endl <<  "NO";
    }
    
    
    
}
int main()
{
    _kady(); _solve();
}