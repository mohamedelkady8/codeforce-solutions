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
     double x , y , z ;
   cin>> x;
   z=3.141592653;
   y=z * pow(x , 2) ;
   cout << std::setprecision(9) << y ;
}
int main()
{
    _kady(); _solve();
}