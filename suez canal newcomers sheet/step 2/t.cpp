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
    string x , y ;
    bool a = false, b = false ;
    cin >> x ;
    cin >> y ;
    for (int i = 0; i < max(x.size(),y.size()); i++)
    {
        if (x[i] == y[i])
        {

        }
        else if (int(x[i]) > int (y[i]))
        {
            a = true ;
            break ;
        }
        else if (int (x[i]) < int (y[i]))
        {
            b = true ;
            break;
        }
        
    }
    if (a == true)
    {
        cout << y ;
    }
    else if (b == true)
    {
        cout << x ;
    }
    else
    {
        cout << x ;
    }
    
    
    
}
int main()
{
    _kady(); _solve();
}