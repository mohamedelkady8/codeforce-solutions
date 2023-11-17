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
    string x; 
    ll y , counter_r = 0 , counter_b = 0 ;
    cin >> y ;
    cin >> x ;
    for (ll i = 0; i < y; i++)
    {
        if (x[i] == 'R')
        {
            counter_r ++ ;
        }
        else if (x[i] == 'B')
        {
            counter_b ++ ;
        }
        
    }
    if (counter_r > counter_b)
    {
        cout << "Real Madrid";
    }
    else if (counter_r < counter_b)
    {
        cout << "Barcelona" ;
    }
    else
    {
        cout << "Tie";
    }
    
    
    
}
int main()
{
    _kady(); _solve();
}