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
void replay (ll x )
{
    if (x == 0)
    {
        return ;
    }
    cout << "I love Recursion" << endl ;
    replay(x-1) ;
    
}
void _solve()
{
    ll x ;
    cin >> x ;
    replay(x) ;   
}
int main()
{
    _kady(); _solve();
}