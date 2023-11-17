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
    int t ;
    cin >> t ;
    while (t--)
    {
        int x ;
        cin >> x ;
        int y[x] ;
        for (ll i = 0; i < x; i++)
        {
            cin >> y[i] ;
            cout << y[i] << " ";
        }
        int i = 0  , mx , re = 0;
        while (true)
        {
            if (re == x-1)
            {
                break;
            }
            
            if (i == re)
            {
                mx = max(y[i],y[i+1]) ;
            }
            else
            {
                mx = max(mx, y[i+1]);
            }
            cout << mx << " " ;
            i++ ;
            if (i == x-1)
            {
               re ++ ;
               i = re ; 
            }
            
        }
        
        cout << endl ;
        
    }
}
int main()
{
    _kady(); _solve();
}