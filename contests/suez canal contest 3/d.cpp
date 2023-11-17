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
    int t ;
    cin >> t ;
    while (t--)
    {
        int arr[3] ;
        int x = 1 , y = 1, price = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i] ;
        }
        
        for (int i = 1; i < arr[0]; i++)
        {
             x++ ;
            price += y ;
        }
        
        for (int i = 1; i < arr[1]; i++)
        {
            y++ ;
            price += x;
        }
        if (price <= arr[2])
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    
}
int main()
{
    _kady(); _solve();
}