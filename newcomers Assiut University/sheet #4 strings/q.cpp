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
    ll counter = 0 ; 
    string x ;
    bool flag  = false;
    while (cin >> x)
    {
        reverse(x.begin(),x.end()) ;
        if (flag)
        {
            cout << " " ;
        }
        flag = true ;
        cout << x ;
    }
    
}
int main()
{
    _kady(); _solve();
}