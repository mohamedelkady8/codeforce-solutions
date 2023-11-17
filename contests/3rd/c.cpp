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
    ll t , size;
    string x ; 
    cin >> t;
    while (t--)
    {
        cin >> size ;
        cin >> x ;
        for (ll i = 0; i < size; i++)
        {
            if ((x[0] == '0' && x[x.size()-1] == '1') || (x[0] == '1' && x[x.size()-1] == '0') )
            {
                    x.erase(0,1);
                    x.erase(x.size()-1,1);
            }
        }
            
        
        cout << x.size() << endl;
    
    }
    
}
int main()
{
    _kady(); _solve();
}