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
    ll row , col , x;
    bool flag = false ;
    cin >> row >> col ;
    ll y[row] [col] ;
    for (ll i = 0; i < row; i++)
    {
        for (ll j = 0; j < col; j++)
        {
            cin >> y[i] [j] ;
        }
        
    }
    cin >> x ;
    for (ll i = 0; i < row; i++)
    {
        for (ll j = 0; j < col; j++)
        {
            if (x == y[i] [j])
            {
                flag = true ;
            }
            
        }
        
    }
    if (flag)
    {
        cout << "will not take number" ;
    }
    else
    {
        cout << "will take number";
    }
    
    
}
int main()
{
    _kady(); _solve();
}