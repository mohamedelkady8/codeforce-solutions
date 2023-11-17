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
    string x , y , z , a;
    cin >> x ; 
    cin >> y ;
    z = y.at(0); 
    a = x.at(0) ;
    cout << x.size() << " " << y.size() << endl ;
    cout << x << y << endl; 
    cout << x.replace(0 , 1 , z) << " " << y.replace(0 , 1 , a) ;

    
}
int main()
{
    _kady(); _solve();
}