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
    double x, p , ans;
    cin >> p >> x;
    ans =x / ( 1.0 - p / 100 );
    cout << fixed << setprecision(2);
    cout << ans;
}
int main()
{
    _kady(); _solve();
}