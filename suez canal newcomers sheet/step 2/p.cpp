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
    int x , y ; 
    cin >> x >> y  ; 
    int z[x][y] ;
    for (int i = 0; i < x ; i++)
    {
        for (int j= 0; j < y ; j++)
        {
            cin >> z[i][j] ;
        }
        
    }
    for(int i=0;i<x;i++)
	{
		for(int j=y-1;j>=0;j--)
		{
			cout<<" "<<z[i][j];
		}
		cout<<endl;
	}
}
    int main()
    {
        _kady(); _solve();
    }