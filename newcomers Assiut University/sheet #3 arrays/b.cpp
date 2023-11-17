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
    ll  n , z , a=0 ;
    bool f = false ;
    cin >> n;
    ll x[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i] ;
    }
    cin >> z;
    for (ll j = 0; j <= n-1; j++)
    {
        if (x[j] != z)
        {
            a++;
        }
        else if (x[j] == z)
        {
            cout << a;
            f= true;
            break;
        }    
    }
    if (f == false)
    {
        cout << "-1";
    }
    
}
int main()
{
    _kady(); _solve();
}