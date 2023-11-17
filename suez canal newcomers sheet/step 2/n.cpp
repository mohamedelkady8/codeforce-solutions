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
        int t ; 
        cin >> t ; 
        while (t--)
        {
            int n ; 
            cin >> n ; 
            int arr[n] ;
            for (int i = 0; i < n; i++)
            {
                cin >>  arr[i] ; 
            }
            for (int i = 0; i < n ; i++)
            {
                int max_sub = arr[i];
                for (int j = i; j < n; j++)
                {
                    if (arr[j] > max_sub)
                    {
                        max_sub = arr[j] ;
                    }
                    cout << max_sub << " " ;
                }
            }
                cout << endl ;
            
        }
        
    }
    int main()
    {
        _kady(); _solve();
    }