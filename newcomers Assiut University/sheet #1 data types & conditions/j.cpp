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
   double x,y,z,c;
   cin>>x>>y;
   z=x/y;
   int g,d,f;
   d=x;
   f=y;
   g=d/f;
   c=g-z;
     double z2,c2;
   z2=y/x;
   int g2,d2,f2;
   d2=x;
   f2=y;
   g2=f2/d2;
   c2=g2-z2;
 if (c==1||c2==1){
   cout<<"Multiples";
 }  

else if (c==0||c2==0){
   cout<<"Multiples";
}
 else{
    cout<<"No Multiples";
 }  

}
int main()
{
    _kady(); _solve();
}