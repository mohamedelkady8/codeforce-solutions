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
      ll k, s, counter = 0;
    cin >> k >> s;
    for (ll i = 0; i <= k; i++)
    {
        for (ll j = 0;  j<= k; j++)
        {
            if (s - i - j >= 0 && s - i - j <= k)
            {
                counter++;
            }
        }
    }
    cout << counter;
}
int main()
{
    _kady(); _solve();
}