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
    ll x , ans; 
    string y ;
    cin >> y ; 
    cin >> x ; 
    ll man = 4000 , dev = 1000 , test = 3000 ;
    if (y == "Developer")
    {
        ans = dev * x ;   
    }
    else if (y == "Manager")
    {
        ans = man * x ;   
    }
    else if (y == "Tester")
    {
        ans = test * x ;   
    }
    cout << ans ;
}
int main()
{
    _kady(); _solve();
}