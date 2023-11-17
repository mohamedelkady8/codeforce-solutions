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
    string x , z; 
    cin >> x ;
    z = x ;
    int a = 0  ;
    while (z.size()!= 0)
    {
         int counter2 = 0 ;
    for (ll i = 0; i < z.size(); i++)
    {
        if (x[i] == 'L')
        {
            counter2 ++ ;
            
        }
        else
        {
            break;
        }
    }
    z.erase(0,counter2*2) ;
    a ++ ;
    }
    if (a == 1)
    {
        cout << a << endl;
    }
    else
    {
        cout << a - 1 << endl ;
    }
    
     
    while (x.size() != 0)
    {
        int counter = 0 ;
    for (ll i = 0; i < x.size(); i++)
    {
        if (x[i] == 'L')
        {
            counter ++ ;
            
        }
        else
        {
            break;
        }
    }
    x.erase(0,counter*2) ;
    for (ll i = 0; i < counter; i++)
    {
        cout << "L";

    }
    for (ll i = 0; i < counter; i++)
    {
        cout << "R";

    }
    cout << endl ;
    }
    
}
int main()
{
    _kady(); _solve();
}    