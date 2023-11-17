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
   ll x,a,b,c;
 
cin >> x ;
cin >> a >> b >> c;
 
if ( x >=a  )
{
     if (a > b && a > c)
     {
        cout << "Mango Juice";
     }
     
}
else if (x>=b)
{
 
    cout << "Apple Juice";
}
else if (x>=c )
 {
    if (c > a && c > b)
    {
    cout << "Lemon Juice";
    }

}
 
 
else {
    cout << "Go and drink some water";
}
    
    
}
int main()
{
    _kady(); _solve();
}