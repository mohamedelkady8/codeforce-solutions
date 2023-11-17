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
 ll x,sum = 0;
 cin >> x;
 ll y[x] ;
  for (ll i = 0; i <= x-1; i++)
  {
    cin >> y[i];
    sum= sum + y[i];
  }
  if (sum <0)
  {
    cout << sum * -1 ;
  }
else
{
    cout << sum;
}

}
int main()
{
    _kady(); _solve();
}