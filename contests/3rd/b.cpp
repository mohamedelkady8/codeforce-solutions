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
        bool z = false ;
        int counterx = 0, countery = 0 ;
        cin >> size ;
        cin >> x ;
        for (ll i = 0; i < size; i++)
        {
            if (x[i] == 'R')
            {
                counterx++ ;
            }
             else if (x[i] == 'L')
            {
                counterx--;
            }
             if (x[i] == 'U')
            {
                countery ++ ;
            }
             else if (x[i] == 'D')
            {
                countery -- ;
            }
            if (counterx == 1 && countery == 1)
            {
                z = true ;
                break;
            }
            
        }
       if (z)
       {
        cout << "YES" << endl;
       }

        else
        {
            cout << "NO" << endl ;
        }
        
        
    }
    
}
int main()
{
    _kady(); _solve();
}