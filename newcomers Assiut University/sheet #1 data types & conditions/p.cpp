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
 char x;
 ll y;
 cin>>x;
 y=x%2;
 if (y==0)
{
    cout<<"EVEN";
}
 else 
 {
    cout<<"ODD";
 }
}
int main()
{
    _kady(); _solve();
}