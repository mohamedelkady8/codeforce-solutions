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
    ll rooms , counter = 0;
    cin >> rooms ;
    while (rooms --)
    {
        ll capcity , people ;
        cin >> capcity >> people ;
        if (people - capcity >= 2)
        {
            counter ++ ;
        }
        else
        {
            continue;
        }
        
    }
    cout << counter ;
}
int main()
{
    _kady(); _solve();
}