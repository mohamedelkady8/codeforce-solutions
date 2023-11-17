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
int time (int x , int y , int z )
{
    ll counter = 0 ;
    bool triangle = true ;
    while (triangle)
    {
        if (x + y > z && y + z > x && x + z > y )
         {
           triangle = false ;
         }
         counter ++ ;
    }
    return counter ; 
}
void _solve()
{
    int x , y , z ;
    cin >> x >> y >> z ;
    cout << time ( x , y , z) ;
}
int main()
{
    _kady(); _solve();
}