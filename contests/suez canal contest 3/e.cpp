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
    string x ;
    bool flag = false;
    cin >> t ;
    cin >> x ;
    string y = x ;
    for (ll i = 0 ; i < t; i++)
    {
         for (ll j = i; j < t ; j++)
     {
            swap(x[j], x [i]); 
        reverse (x.begin(), x.end());
        if (x == y)
        {
           flag = true ; 
           break ;
        }
     }    
    }
    if (flag)
    {
        cout << "YES" ;
    }
    
    else
    {
        cout << "NO" ;
    }
    
}
int main()
{
    _kady(); _solve();
}