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
    string a , b ; 
    char c , d;
    bool isEQual = false  , first = false , second = false;
    
    cin >> a;
    cin >> b ; 
    for (int i = 0; i < a.size(); i++)
    {
        c = tolower(a[i]) ;
        d =tolower(b[i]) ;
        if (int (c) == int (d))
        {
            isEQual = true ;
        }
        else if (int (c) > int (d))
        {
            isEQual = false ;
            first = true ;
            break ;
        }
        else if ( int(c) < int(d))
        {
            isEQual = false ;
            second = true ;
            break ;
        }
    }
    if (isEQual)
    {
       cout << "0" ;
    }
    else if (second)
    {
        cout << -1 ;
    }
    else if (first)
    {
        cout << "1" ;
    }
    
    
    
}   
    
int main()
{
    _kady(); _solve();
}