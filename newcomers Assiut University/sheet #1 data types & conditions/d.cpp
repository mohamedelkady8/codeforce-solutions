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
   long long  a , b, c , d ;
cin >> a >> b >> c >> d ;
long long  e ,f , g ;
e=a*b;
f=c*d;
g=e-f;
cout<<"Difference = "<<g;
}
int main()
{
    _kady(); _solve();
}