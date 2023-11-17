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
    int size , counter = 0 ;
    cin >> size ;
    int arr [size] , x[size] = {0} , y[size] = {0};
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i] ;
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            x[i] = arr [i] ;
        }
        else
        {
            y[i] = arr [i] ;
        }
        
    }
 sort(x, x + size);
 sort(y, y + size);
    for (int i = 0; i < size; i++)
    {
        if (x[i] != 0)
        {
            cout << x[i] << " " ;
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        if (y[i] != 0)
        {
            cout << y[i] << " " ;
        }
        
    }
    
}
int main()
{
    _kady(); _solve();
}