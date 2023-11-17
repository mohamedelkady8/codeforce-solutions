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
    ll t ; 
    char y ;
    bool z = false ;
    cin >> t ;
    string x = "codeforces";
    while (t--)
    {
        cin >> y ;
        for (ll i = 0; i < x.size(); i++)
        {
            if (y == x[i])
            {
                z = true ;
                break ;
            }
            else
            {
                z = false ;
            }
        }
        if (z)
    {
        cout << "YES" << endl;
    }
    
    else
    {
        cout << "NO" << endl;
    }
    
    }
    
}
int main()
{
    _kady(); _solve();
}