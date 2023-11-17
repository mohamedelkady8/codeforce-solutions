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
    string s , v = "hello";
    cin >> s ;
   int i = 0  ;
   int z = 0 ;
    while (true)
    {
        if ( i == s.size() || z == v.size())
        {
            break;
        }
        if (s[i] == v[z])
        {
            z++ ;
        }
       i++ ; 
    }
   if (z == 5)
   {
    cout << "YES" ;
   }
    else
    {
        cout <<"NO" ;
    }
    
       
}
int main()
{
    _kady(); _solve();
}