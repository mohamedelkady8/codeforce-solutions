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
 ll n ;
 cin >> n ;
 for (ll i = 1; i <= 4*n; i++)
 {
    if( i % 4 == 0)
    {
        cout << "PUM" << endl ;

    }
    else
    {
        cout<< i << " ";
    }
    
 }
    
}
int main()
{
    _kady(); _solve();
}