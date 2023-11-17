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
    ll x, y;
    string z;
    cin >> left >> right;
    cin >> z;
    bool a = false;
    if (z[x] != '-' || z.size() != x + y + 1 || z[z.size() - 1] == '-' || z[0] == '-')
    {
        cout << "No";
       return 0;

    }

    for (ll i = 0; i < z.size(); i++)
    {
        if (i == x && z[i] == '-')
        {
            continue;
        }
        if (z[i] - '0' >= 0 && z[i] - '0' <= 9)
        {
            a = true;
            continue;
        }
        else
        {
            a = false;
            break;
        }
    }
    if (a)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
int main()
{
    _kady(); _solve();
}