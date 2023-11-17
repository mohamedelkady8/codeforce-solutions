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
        int size , smallest = INT_MAX , index = 0; 
        cin >> size ; 
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            if (smallest > arr[i])
            {
                smallest =arr[i];
                index = i;
            }
            
        }
        cout << smallest << " " << index+1;
           
    }
    int main()
    {
        _kady(); _solve();
    }