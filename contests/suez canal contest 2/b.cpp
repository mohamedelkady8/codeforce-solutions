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
     vector <ll> a;
    ll n, s;
    cin >> n;
    while (n != 0)
    {
        a.push_back(n%10);
        n /= 10;
    }
    
    sort (a.begin(), a.end());
 
    for (ll i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }
}
int main()
{
    _kady(); _solve();
}