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
double avg (double a, ll b)
{
    return a/b;
}
void _solve()
{
    cout << fixed << setprecision(6);
    ll b  ;
    double a ;
    cin >> b ;
    double y[b] ;
    for (ll  i = 0; i < b; i++)
    {
        cin >> y[i];
        a = a + y[i] ;
    }
    cout << avg(a,b);

    
}
int main()
{
    _kady(); _solve();
}