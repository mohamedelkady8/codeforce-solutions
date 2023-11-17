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
    string x ;
    cin >> x ;
    for (ll i = 0; i < x.size(); i++)
    {
        if (x[i] =='E'&& x[i+1] == 'G' && x[i+2] == 'Y'&& x[i+3] == 'P'&& x[i+4] == 'T' )
        {
            cout << " " ;
             i += 4;
            continue;
        }
        cout<< x[i];
    }
}
int main()
{
    _kady(); _solve();
}