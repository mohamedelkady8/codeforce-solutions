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
    ll c, ab = LLONG_MAX, yz = LLONG_MIN, r, s, t;

  cin >> c;

  while (c--)
  {
     ab= LLONG_MAX, yz = LLONG_MIN;
    
    cin >> r >> s >> t;

    yz = max(max(r, s), t);
    ab = min(min(r, s), t);

    if (r != ab && r != yz)
    {
      cout << r;
    }
    else if (t != ab && t != yz)
    {
      cout << t;
    }
    else if (s != ab && s != yz)
    {
      cout << s;
    }
    
  cout << endl;
  }
  
}
int main()
{
    _kady(); _solve();
}