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
   long long a , b , c ,d;
cin >> a ;
b = a+1 ;
d = b*a ;
c = d/2 ;
cout << c ;
}
int main()
{
    _kady(); _solve();
}