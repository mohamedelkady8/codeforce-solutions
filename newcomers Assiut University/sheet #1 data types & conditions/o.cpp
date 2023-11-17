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
    ll a, c;
    char b;
    cin >> a >> b >> c;

    if (b == '+')
    {
        cout << a + c;
    }
    else if (b == '-')
    {
        cout << a - c;
    }
    else if (b == '*')
    {
        cout << a * c;
    }
    else if (b == '/')
    {
        cout << a / c;
    }

    
    
}
int main()
{
    _kady(); _solve();
}