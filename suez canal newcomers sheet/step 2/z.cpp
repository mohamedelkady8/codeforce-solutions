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
    string line  , revesed , last; 
    getline(cin , line) ;
    line += " " ;
    int sz = line.size() , counter = 0 ;
    for (int i = 0; i < sz; i++)
    {
        if (line[i] == ' ')
        {
            counter ++ ;
         reverse(revesed.begin(), revesed.end()); 
         last += revesed;
         if (counter == 1)
         {
            last += " ";
         }
         
           revesed = "";
        }  
       
        revesed += line[i];  

        
    }
    last.erase(last.size()-1);
    cout << last ;
}
int main()
{
    _kady(); _solve();
}
 