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
bool odd (int x)
{
   if (x % 2 == 0 )
   {
    return false ;
   }
   else
   {
    return true ; 
   }
}
bool binary (ll k)
{
    string x , y;
    while (k != 0)
    {
        if (k % 2 == 0)
        {
            x += "0";
        }
        else
        {
            x += "1" ;
        }
        k /=2 ;
    }
    y = x ;
   reverse(y.begin(),y.end());
    if (y == x)
    {
        return true ;
    }
    else
    {
        return false ;
    }
    
    
}
void _solve()
{
    ll b ; 
    cin >> b ; 
    if (odd(b) == true && binary(b) == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
}
int main()
{
    _kady(); _solve();
}