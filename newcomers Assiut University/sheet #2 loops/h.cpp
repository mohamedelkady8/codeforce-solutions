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
cin>>x;
bool prime=1 ;
for (ll i = 2; i < x; i++)
{
    if (x % i == 0)
    {
    prime =0; 
    break;
    }
}
if (prime == true)
{
    cout<<"YES";
}
else
{
    cout<<"NO";
    
}
}
int main()
{
    _kady(); _solve();
}