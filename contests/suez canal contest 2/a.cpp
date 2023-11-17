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
     int t;
     cin>>t;
     ll x,y;
while (t--)
{
    cin>>x>>y;
if( x % 2 == 0 && y % 2 != 0)
{
    cout<<"yes\n";
}
else if( x % 2 != 0 && y % 2 != 0)
{
    cout<<"yes\n";
}
else if( x == 0 && y % 2 != 0)
{
    cout<<"yes\n";
}

else
{
 cout<<"no\n";
}  
}
}
int main()
{
    _kady(); _solve();
}