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
    string x, y = "314159265358979323846264338327";
    ll t, counter = 0;

    cin >> t;

    while (t--)
    {
        cin >> x;
        counter = 0;

        for (ll i = 0; i < x.size(); i++)
        {
            if (x[i] == y[i])
            {
                counter++;
            }
            else if (x[i] != y[i])
            {
                break;
            }    
        }
        cout << counter << endl;
        
    }
}
int main()
{
    _kady(); _solve();
}