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
    cin >> x >> y >> z ;
    if (x + y >= z && x <= z)
    {
        cout << z - x ;
    }
    else if (x + y >= z && x >= z)
    {
        cout << "0";
    }
    else
    {
        cout << "-1" ;
    }

    
}
int main()
{
    _kady(); _solve();
}