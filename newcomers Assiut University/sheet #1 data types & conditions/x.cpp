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
     int x, y, z,l;
    cin >> x >> y >> z >>l;
    if(y<z||l<x) 
    {
    cout << -1;
    }
    else
    {
        cout << max(x, z) << " " << min(y, l);
    }
}
int main()
{
    _kady(); _solve();
}
