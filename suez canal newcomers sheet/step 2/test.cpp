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
    int z[5][5] ;
    int row = 0 , col = 0, counter = 0 ;
    for (int i = 0; i < 5 ; i++)
    {
        for (int j= 0; j < 5 ; j++)
        {
            cin >> z[i][j] ;
        }
        
    }
    for(int i=0;i<5;i++)
	{
		for(int j=0;j< 5;j++)
		{
            if (z[i][j] == 1)
            {
             row = i ;
             col = j ;
            }
		}
	}

    while (true)
    {
        
        if (row < 2)
        {
            row ++ ;
            counter ++ ; 
        }
       
       else if ( row > 2)
       {
        row -- ;
        counter ++ ; 
       }
        
        if (col < 2)
        {
            col ++ ;
            counter ++ ; 
        }
       else if ( col > 2)
       {
        col -- ;
        counter ++ ; 
       }
        if (row == 2 && col == 2)
        {
            break;
        }
        
    }
    cout << counter ;
    
}
    int main()
    {
        _kady(); _solve();
    }