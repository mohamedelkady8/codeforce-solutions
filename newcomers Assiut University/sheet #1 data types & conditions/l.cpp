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
   string x, y, z, l; 
 cin >> x >> z;
 cin >> y >> l;

   if(z==l)
   {
      cout<<"ARE Brothers";
   }
   else
   {
      cout<<"NOT";
   }
}
int main()
{
    _kady(); _solve();
}