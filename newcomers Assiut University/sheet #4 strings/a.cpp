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
    cin >> x ; 
    cin >> y ;
    cout << x.length() << " " << y.length() << endl ; 
    cout << x << " " << y ;

}
int main()
{
    _kady(); _solve();
}