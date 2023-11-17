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
void print(int x )
{
     for (int i = 1; i <= x; i++)
    {
        if (i != 1)
            cout << " ";
        cout << i;
    }
}
void _solve()
{
    ll  a ; 
    cin >> a ;
    print(a);
}
int main()
{
    _kady(); _solve();
}