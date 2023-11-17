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
    ll x ,y; 
    ll sum = 0  , even = 0 , odd = 0; 
    cin >> x >> y; 
    for (ll i = min(x,y); i <= max(x,y); i++)
    {
        sum += i;
    }
    for (ll i = min(x,y); i <= max(x,y); i++)
    {
        if (i % 2 == 0)
        {
            even += i;
        }
        else
        {
            odd += i ;
        }
        
    }
    cout << sum << endl << even << endl << odd ;

}
int main()
{
    _kady(); _solve();
}