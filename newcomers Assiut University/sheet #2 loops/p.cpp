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
    ll t,z = 0,l, y; 
    cin >> t;
    while (t--)
    {
        cin >> y ;
        if (y == 0)
        {
        cout << "0";
        }
         while (y != 0)
    {
        l = y % 10;
        y /= 10 ;
        cout << l << " ";
    }
   cout << endl;
    }
}
int main()
{
    _kady(); _solve();
}