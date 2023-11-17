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
    string x , y ;
    cin >> x >> y ; 
    if (x == "O")
    {
        if ( y == "A" || y == "AB" || y =="B" || y == "O")
        {
            cout << "YES" ;
        }
        else
        {
            cout << "NO" ;
        }
        
    }
    else if (x == "AB")
    {
        if (  y == "AB" )
        {
            cout << "YES" ;
        }
        else
        {
            cout << "NO" ;
        }
        
    }
    
    else if (x == "A")
    {
        if ( y == "A" || y == "AB" )
        {
            cout << "YES" ;
        }
        else
        {
            cout << "NO" ;
        }
        
    }
    
    else if (x == "B")
    {
        if ( y == "B" || y == "AB" )
        {
            cout << "YES" ;
        }
        else
        {
            cout << "NO" ;
        }
        
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