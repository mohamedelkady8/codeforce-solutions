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
    ll x;
    cin >> x;
    ll y[x];
    for (ll i = 0; i < x; i++)
    {
        cin >> y[i];
        if (y[i] > 0)
        {
            cout << "1" << " ";
        }
        else if (y[i] < 0)
        {
            cout << "2" << " ";
        }
        else if (y[i] == 0)
        {
            cout << "0" << " ";
        }
        
    }
    
}
int main()
{
    _kady(); _solve();
}