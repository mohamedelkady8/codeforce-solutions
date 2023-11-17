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
        int size ; 
        bool opr = false;
        cin >> size ;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
           for (int i = 0; i < size; i++)
           {
            if (arr[i] % 2 == 0 )
            {
                opr = true;
            }
            else
            {
                opr = false ;
                break;
            }
            
           }
           
           
    }
    int main()
    {
        _kady(); _solve();
    }