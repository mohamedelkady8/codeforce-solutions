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
    ll x , first = 0 , second = 1 ; 
    cin >> x ;
    if (x == 1)
    {
        cout << first ;
    }
    else if (x == 2)
    {
        cout << second ;
    }
    else
    {
        for (ll i = 2; i < x; i++)
        {
            ll r = first + second ;
            first = second ;
            second = r ;
        }
    cout << second << endl;
    }
    
    
    
    
}
int main()
{
    _kady(); _solve();
}