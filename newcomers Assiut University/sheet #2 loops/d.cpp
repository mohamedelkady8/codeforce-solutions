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
    ll x;
    while(1)
    {
        ll y;
        cin>>y;
        if (y==1999)
        {
            cout << "Correct";
            break;
        }
        else 
        {
            cout<<"Wrong"<<"\n";
        }
        
    }
    
}
int main()
{
    _kady(); _solve();
}