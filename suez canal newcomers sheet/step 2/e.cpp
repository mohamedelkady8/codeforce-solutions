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
        while (true)
        {
            int sum = 0 ; 
            cin >> x >> y ; 
            if (x <= 0 || y <= 0)
            {
                break;
            }
            
            for (int i = min(x,y); i <= max(x,y); i++)
            {
                cout << i << " " ;
                sum += i ;
            }
            cout <<"sum ="<< sum << endl ;
            
        }
        
    }
    int main()
    {
        _kady(); _solve();
    }