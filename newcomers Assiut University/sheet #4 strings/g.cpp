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
    string x ; 
    ll y , z; 
    cin >> x ;
    y = x.size() ;
    for (ll i = 0; i < y; i++)
    {
        z = x.at(i);
        if (z >= 65 && z <= 90)
        {
            z = z + 32 ;
            cout << char(z) ;
        }
        else if (z >= 97 && z <= 122)
        {
            z = z - 32 ;
            cout << char(z) ;
        }
        else if (z == 44)
        {
            z = 32 ;
            cout << char(z) ;
        }
        
    }
    
}
int main()
{
    _kady(); _solve();
}