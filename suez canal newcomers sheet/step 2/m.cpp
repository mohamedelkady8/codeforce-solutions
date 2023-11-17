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
    int is_sub (int arr_a[] , int n , int arr_b[] , int x) 
    {
        int i = 0 , j = 0 ;
        while (i < n && j < x)
        {
            if (arr_a[i] == arr_b[j])
            {
                j++ ;
            }
            i++ ;
        }
       return(j == x) ;
    }
    void _solve()
    {
        int n , x ; 
        cin >> n >> x ; 
        int arr_a[n] , arr_b[x] ;
        for (int i = 0; i < n; i++)
        {
            cin >> arr_a[i] ;
        }
        for (int i = 0; i < x; i++)
        {
            cin >> arr_b[i] ;
        }
        if (is_sub(arr_a,n , arr_b , x))
        {
            cout << "YES" ;
        }
        else
        {
            cout << "NO" ;
        }
        
    }
    int main()
    {
        _kady(); _solve();
    }