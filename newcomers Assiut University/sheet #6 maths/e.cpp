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
    ll x , sum = 0, counter = 0; 
    cin >> x ;
    ll i = 1 ; 
    while (i < x)
    {
        sum += i;
        i++;
        if (sum > x)
        {
            break ;
        }
        else
        {
            counter ++ ;
        }
    }
    cout << counter ; 
}
int main()
{
    _kady(); _solve();
}