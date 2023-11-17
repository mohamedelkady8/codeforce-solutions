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
    ll t , counter = 0 , x;
    bool flag = true ;
    cin >> t ;
    ll  y [t] ;
    for (ll i = 0; i < t; i++)
    {
        cin >> y[i] ;
        if (y[i] % 2 != 0)
        {
             flag = false ;
        }
    }
    while (flag)
    {
       for (ll i = 0; i < t; i++)
       {
        if (y[i] % 2 != 0 )
        {
            flag = false ;
            break;
        }
        y[i] /=2 ;
       }
       
        if (flag)
        {
           counter ++ ;
        }
        else
        {
            break ;
        }
        
    }
    cout << counter ;
}
int main()
{
    _kady(); _solve();
}