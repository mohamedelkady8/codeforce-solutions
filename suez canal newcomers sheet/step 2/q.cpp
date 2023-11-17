    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define all(v)	 ((v).begin()), ((v).end())
     
    void _kady()
    {
        ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
        #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
        #endif
    }
    void _solve()
 {
    int x  , left = 0 , right = 0; 
    cin >> x  ; 
    int z[x][x] ;
    for (int i = 0; i < x ; i++)
   {
        for (int j= 0; j < x ; j++)
        {
            cin >> z[i][j] ;
            if (i == j)
            {
                left += z[i][j];
            }
            if ((i + j) == x-1)
            {
               right += z[i][j];
            }
            
        }
        
    }
    cout <<max(left,right) - min(left,right) ;
}

    int main()
    {
        _kady(); _solve();
    }