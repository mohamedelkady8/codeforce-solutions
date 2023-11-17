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
     long long int x , y , z , p , o ;
    
   cin>>x;
   cin>>y;
   z=x+y ;
   o=x*y ;
   p=x-y ; 
   cout<< x << " + " << y<< " = " << z << "\n"; 
   cout<< x << " * " << y<< " = " << o << "\n";
   cout<< x << " - " << y<< " = " << p << "\n"; 
    

}
int main()
{
    _kady(); _solve();
}