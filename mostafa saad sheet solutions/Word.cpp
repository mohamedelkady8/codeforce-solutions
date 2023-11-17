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
    string x  ;
    int capCounter = 0 , lowCounter = 0 ; 
    cin >> x ;
    for (int i = 0; i < x.size(); i++)
    {
        if(isupper(x[i]))
        {
            capCounter++ ;
        }
        else
        {
            lowCounter ++ ;
        }
        
    }
    for (int i = 0; i < x.size(); i++)
    {
         if (capCounter <= lowCounter)
         {
            if (x[i] >= 'A' && x[i] <= 'Z')
            {
              x[i] = x[i] + 32;
            }
        }
        else
        {
             if (x[i] >= 'a' && x[i] <= 'z')
            {
              x[i] = x[i] - 32;
            }
        }
          
    }
    cout << x ;
}   
    
int main()
{
    _kady(); _solve();
}