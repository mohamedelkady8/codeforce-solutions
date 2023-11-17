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
 ll x, y; 
 cin >> x >> y;
    int l = 0;
    for(int i = x; i <= y; i++)
    {
        ll t = i;
        ll f = 1;
        while(t > 0)
        {
            ll d ;
            d = t % 10;
            t /= 10;
            if(d == 4 || d == 7)
                continue;
            else {
                f = 0; break;
            }
        }
        if(f){
            cout << i << " ";
            l = 1;
        }
 
    }
        if(!l)
        {
            cout << -1 << "\n";
        }

    
     
    
}
int main()
{
    _kady(); _solve();
}