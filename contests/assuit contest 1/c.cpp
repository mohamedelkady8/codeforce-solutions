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
    char x , y ;
    ll z ;
    cin >> x ; 
    z = x ;
    y = z + 1;
    if (x == 'z')
    {
        cout << "a" ;
    }
    else
    {
        cout << y;
    }
    
    
    
}
int main()
{
    _kady(); _solve();
}