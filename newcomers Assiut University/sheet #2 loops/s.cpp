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
    ll x , z= 0;
    cin >> x;
    for (ll i = 1; i <= x; i++)
    {
        for (ll j = x-1; j >= i; j--)
        {
            cout << " ";
        }
        
        for (ll  k = 0 ; k <= z; k++)
        {
            cout << "*";
        }
        cout << endl;
        z=z+2;
    }
    
}
int main()
{
    _kady(); _solve();
}