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
    ll x  , sum = 0; 
    char z;
    cin >> x ;
    while (cin >> z)
    {
        
        sum += (z -'0');


    }

    cout <<   sum ;
    
}
int main()
{
    _kady(); _solve();
}