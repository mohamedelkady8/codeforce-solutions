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
  ll x,y,z;
  cin>>x>>y>>z;
  if (y>=x&&z>=x&&z>=y)
  {
    cout<<x<<"\n"<<y<<"\n"<<z<<"\n"<<"\n"<<x<<"\n"<<y<<"\n"<<z;
  }
  else if (y>=x&&z>=x&&y>=z)
  {
    cout<<x<<"\n"<<z<<"\n"<<y<<"\n"<<"\n"<<x<<"\n"<<y<<"\n"<<z;
  }
  else if (x>=z&&x>=y&&z>=y)
  {
    cout<<y<<"\n"<<z<<"\n"<<x<<"\n"<<"\n"<<x<<"\n"<<y<<"\n"<<z;
  }
  else if (x>=y&&z>=y&&z>=x)
  {
    cout<<y<<"\n"<<x<<"\n"<<z<<"\n"<<"\n"<<x<<"\n"<<y<<"\n"<<z;
  }
  else if (x>=z&&y>=z&&y>=x)
  {
    cout<<z<<"\n"<<x<<"\n"<<y<<"\n"<<"\n"<<x<<"\n"<<y<<"\n"<<z;
  }
  else if (x>=z&&x>=y&&y>=z)
  {
    cout<<z<<"\n"<<y<<"\n"<<x<<"\n"<<"\n"<<x<<"\n"<<y<<"\n"<<z;
  }
  
  
}
int main()
{
    _kady(); _solve();
}
