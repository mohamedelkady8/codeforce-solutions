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
    string key ="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/" ;
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789" ;
    string c ;
    ll z , m ;
    cin >> z ;
    cin >> x ;
    if (z == 1)
    {
        for (ll i = 0; i < x.size(); i++)
        {
            m = Original.find(x[i]) ;
            c = key[m];
            x.replace(i,1,c);
        }
        cout << x ;
    }
    else
    {
        for (ll i = 0; i < x.size(); i++)
        {
            m = key.find(x[i]) ;
            c = Original[m];
            x.replace(i,1,c);
        }
        cout << x ;
    }
    
    
}
int main()
{
    _kady(); _solve();
}