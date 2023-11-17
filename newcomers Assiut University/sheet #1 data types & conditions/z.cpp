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
    double x,y,z,l;
    cin>>x>>y>>z>>l;
 
    if (pow(x,(y/l))>(z))
    {
    cout<<"YES";
    }
    else if (pow(x,(y/l))<(z)) 
   {
    cout<<"NO";
   }    
    else
    {
        cout<<"NO";
     } 
 
}
int main()
{
    _kady(); _solve();
}
