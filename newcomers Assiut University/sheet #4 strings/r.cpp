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
    ll a , b , c , d , e;
    cin >> x ;
    a = x.find("username=") ;
    b = x.find("&pwd=") ;
    c = x.find("&profile=") ;
    d = x.find("&role=") ;
    e = x.find("&key=") ;
    cout << "username: " << x.substr(a + 9 , b-49) << endl ;
    cout << "pwd: " << x.substr(b+5,c-59) << endl;

}
int main()
{
    _kady(); _solve();
}