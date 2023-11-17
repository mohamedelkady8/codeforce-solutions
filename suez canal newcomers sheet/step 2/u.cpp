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
        int x , real=0 , bar = 0; 
        string y ;
        cin >> x ;
        cin >> y ;
        for (int i = 0; i < x; i++)
        
        {
            if (y[i] == 'R')
            {
                 real ++ ;
            }
            else
            {
                bar ++ ;
            }
            
        }
        if (bar > real)
        {
            cout << "Barcelona";
        }
        else if (real > bar)
        {
            cout << "Real Madrid";
        }
        else
        {
            cout << "Tie";
        }
        
    }
    int main()
    {
        _kady(); _solve();
    }