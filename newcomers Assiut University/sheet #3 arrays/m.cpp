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
    ll y[x] ;
    
    for (ll i = 0; i < x; i++)
    {
        cin >> y[i] ;
    }
    ll mn = y[0] , mx = y[0] ;
    for (ll i = 0; i < x; i++)
    {
        if (y[i] < mn)
        {
            mn = y[i] ;
        }
        if (y[i] > mx)
        {
            mx = y[i] ;
        }
    }
       ll pos1=0 , pos2 = 0;
        for (ll i = 0; i < x; i++)
        {
            if (mn == y[i])
            {
                pos2 = i ;
            }
        }
        for (ll i = 0; i < x; i++)
        {
            if(mx == y[i])
            {
                pos1 = i ;
                  
            }
        }

        swap(y[pos1],y[pos2]);

        for (ll i = 0; i < x; i++)
        {
            cout << y[i]  << " ";
        }
        
        
        
}
int main()
{
    _kady(); _solve();
}