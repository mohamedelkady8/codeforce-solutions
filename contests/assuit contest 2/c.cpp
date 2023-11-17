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
    ll t, y , n   , m  , counter = 0 ;
    bool flag = true ;
    cin >> t >> y ;
    while (t--)
    {
        ll x ; 
        cin >> x ;
        if (flag)
        {
            n = m ;
            flag = false ; 
        }
        else if (m > n)
        {
            m = n ;
        }
        counter ++ ;
        if (counter == y )
        {
            counter = 0;
            flag = true;
            cout << m << " ";
        }
        
        
    }
    
    
}
int main()
{
    _kady(); _solve();
}