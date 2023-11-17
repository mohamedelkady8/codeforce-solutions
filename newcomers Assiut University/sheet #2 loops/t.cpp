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
    ll n , a ,b , h , v, sum = 0;
    cin >> n >> a >> b;
    for (ll i = 1; i <= n ; i++)
    {
        ll z = i , cont = 0;
        while (z != 0)
        {
            ll holder = z % 10 ;
            cont += holder ;
            z/=10; 
        }
        if(cont >= a && cont <=b)
        {
            sum = sum + i ;
        }
    }
    cout << sum ;

}
int main()
{
    _kady(); _solve();
}