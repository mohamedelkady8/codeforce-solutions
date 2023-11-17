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
    ll t, y, chr = 0;
    string s;
    cin >> t;
    while (t--)
    {
        chr = 0;
        cin >> y;
        cin >> s;

        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] > chr)
            {
                chr = s[i];
            } 
        }
        cout << chr-96 << endl;
    }
}
int main()
{
    _kady(); _solve();
}