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
int x,y,z;
cin>>x>>y>>z;
if (x<=y&&x<=z){
    cout<<x<<" ";
}
else if(y<=z&&y<=x){
    cout<< y <<" ";
}
else if (z<=y&&z<=x){
    cout<<z <<" ";
}

if (x>=y&&x>=z){
    cout<<x;
}
else if(y>=z&&y>=x){
    cout<< y;
}
else if (z>=y&&z>=x){
    cout<<z;
}


}
int main()
{
    _kady(); _solve();
}