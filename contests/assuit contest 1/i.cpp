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
    cin >> x ;
    ll a , b ;
    b = x[0] - '0';
	a = x[1] - '0' ;
    if (a % b == 0 ||b % a == 0)
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