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
    ll t ; 
    cin >> t ;
    string x ;
    while (t--)
    {
        cin >> x ; 
        if(x.find("101") !=string::npos || x.find("010")!=string::npos)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad"<< endl ;
        }
           

    }
    
}
int main()
{
    _kady(); _solve();
}