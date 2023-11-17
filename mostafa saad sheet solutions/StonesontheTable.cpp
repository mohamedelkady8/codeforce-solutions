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
    int n , counter = 0; 
    cin >> n; 
    string x ;
    cin >> x ;
    char z = x[0];
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == z )
        {
            counter ++ ;
        }
    
        z = x[i] ;
    }
    cout << counter - 1;
}   
    
int main()
{
    _kady(); _solve();
}