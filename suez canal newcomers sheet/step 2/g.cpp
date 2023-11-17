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
    ll x , t   ;
    cin >> t ;
    while (t--)
    {
    cin >> x ;
    string y ;
    ll p = 1 , size , r = 0 , counter = 0 ;
    while (x != 0)
    {
        if (x % 2 == 0)
        {
            y += '0' ;
        }
        else
        {
            y += '1' ;
        }
        x= x / 2 ;
    }
    sort(y.begin(),y.end());
    
    for (ll i = 0; i < y.size(); i++)
    {
        if (y[i] == '0')
        {
            counter ++;
        }
        
    }
    for (ll i = 0; i < y.size(); i++)
    {
        if (y[i] == '0')
        {
            y.erase(i,counter);
        }
        
    }
    size = y.size();
    while (size -- )
    {
        r = r + p ;
        p *= 2 ; 
    }
    
    cout << r << endl;
    }
}
int main()
{
    _kady(); _solve();
}