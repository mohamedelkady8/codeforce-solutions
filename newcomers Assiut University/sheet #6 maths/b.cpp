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
    ll x ; 
    cin >> x ;
    bool prime = true ;
    for (ll i = 2; i <= sqrt(x); i++)
    {
        if(x % i == 0  )
        {
            prime = false ;
            break ;
        }

    }

    if (x == 1)
    {
        cout << "NO" ;
    }
    
    else
    {
        
    if (prime == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO" ;
    }
    }
    
    
    
}
int main()
{
    _kady(); _solve();
}