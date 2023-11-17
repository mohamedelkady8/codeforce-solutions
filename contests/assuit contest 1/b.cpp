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
    ll x , y , z ;
    cin >> x >> y >> z;
    if (x % z == 0 && y % z == 0)
    {
        cout << "Both" ;
    }
    else if (x % z == 0 && y % z != 0)
    {
        cout << "Memo" ;
    }
    else if (x % z != 0 && y % z == 0)
    {
        cout << "Momo" ;
    }
    else
    {
        cout <<"No One" ;
    }
    
}
int main()
{
    _kady(); _solve();
}