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
        int size  ; 
        cin >> size ; 
        int arr[size] ;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
          for(ll i=0 ; i < size ; ++i )
    {
        for(ll j=i; j < size ; ++j ) 
        {
            if( arr[i]>arr[j])
            { 
            swap(arr[i], arr[j]);
            } 
        }
        
        
    }
    for(ll i=0 ; i < size ; ++i ) 
     {
        cout << arr[i] << " ";
     }
  
    }
    int main()
    {
        _kady(); _solve();
    }