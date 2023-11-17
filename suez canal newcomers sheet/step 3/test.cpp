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
        int x ;
        while (t--)
        {
             cin >> x ;
        int sum =0 , holder , i =9 ;
        vector<int> vect;
        string str ;
        while (i > 0 && sum < x)
        {
            holder = min(i , x-sum);
            str += holder ;
            vect.push_back(holder);
            sum += i ;
            i -- ;
        }
        if (sum < x)
        {
          cout << -1  << endl ;
        }
        else
        {
            reverse(vect.begin(), vect.end());
           for (int x : vect)
           {
            cout << x  ;
           }
           cout << endl;
        }
        }
        
       
        
        
    }
    int main()
    {
        _kady(); _solve();
    }