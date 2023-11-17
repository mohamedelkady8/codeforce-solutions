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
    
    string x, y;
    cin >> x >> y ;
    ll sx = x.size();
    ll sy = y.size();
    ll sm = min(sx, sy);
    bool flag = 0;
    for (ll i = 0; i < sm; i++)
    {
        if (y[i] > x[i])
        {
            cout << x << endl;
            flag = 0;
            break;
        }
        else if (y[i] < x[i])
        {
            cout << y << endl;
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        if (sx < sy)
        {
            cout << x << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
}
int main()
{
    _kady(); _solve();
}