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
    string x , y , z;
    cin >> x ;
    y = x + x ;
     string str = y;
    string rev = string(str.rbegin(), str.rend());
    if (rev == y)
    {
        cout <<"TOP G" ;
    }
    else
    {
        cout <<"GEEKY";
    }
    
}
int main()
{
    _kady(); _solve();
}