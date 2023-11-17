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
    string s , a = "", b ; 
    cin >> s ;
    string comp = s , ans =s ; 
    for (int i = 0; i < comp.size() - 1; i++)
    {
        a += comp[i] ;
        b = s.erase(0 ,1) ;
        sort (a.begin() , a. end());
        sort (b.begin() , b. end());
        ans = min (ans , a+b) ;
        
    
    }
    cout << ans ;
}
int main()
{
    _kady(); _solve();
}