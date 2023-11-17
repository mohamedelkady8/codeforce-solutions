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
bool prime (int x )
{
bool prime=1 ;

for (ll i = 2; i <= sqrt(x); i++)
{
    if (x % i == 0)
    {
    prime =0; 
    }
}
if (prime)
{
    return true;
}

else
{
    return false;
    
}
}
void _solve()
{
    ll t , a ; 
    cin >> t ; 
    while (t--)
    { 
        cin >> a ; 
        if (a == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        
        
        if (prime(a) == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO"  << endl;
        }
        

    }
    
}
int main()
{
    _kady(); _solve();
}