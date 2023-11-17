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
    int t ,t2;
    cin >> t;
    t2 = t ;
    int maxmagnet = 0;
    int currentmagnet = 0;
    int maxmagnet2 = 0;
     int currentmagnet2 = 0;
     int ai;

            while (t--) {
        
            cin >> ai;
            if (ai == 10) {
                currentmagnet++;
            } 
            else if (ai == 0) {
                currentmagnet2++;
            }
            else {
                maxmagnet = max(maxmagnet, currentmagnet);
                currentmagnet = 0;
            }
        maxmagnet = max(maxmagnet, currentmagnet);
        maxmagnet2 = max(maxmagnet2, currentmagnet2);
        
    }
    if ((maxmagnet == 1  && maxmagnet2 == 0  && t2 == 2) || (maxmagnet == 0 && maxmagnet2 == 1  && t2 == 2))
    {
        cout <<  2 ;
    }
    else
    {
    
    cout <<max(maxmagnet , maxmagnet2)<< endl;
    }
    
         
    
}   
    
int main()
{
    _kady(); _solve();
}