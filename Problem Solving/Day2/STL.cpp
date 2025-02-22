#include<bits/stdc++.h>

using namespace std;
#define ll long long 


signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    const int N=10;
    int arr[N];
    for(int i = 0;i < N;i++)
    {
        // cin >> arr[i]; 
    }

    // for(auto &it:arr) 
    // {
    //     cin >> it;
    // }

    // for(auto it:arr)
    // {
    //     cout << it << ' ';
    // }

    sort(arr, arr+N);
    reverse(arr, arr+N);
    binary_search(arr, arr+N, 5); // True or False
    lower_bound(arr, arr+N, 4); // Array Must Be Sorted
    upper_bound(arr, arr+N, 4); // Array Must Be Sorted
    max_element(arr, arr+N);
    min_element(arr, arr+N);    

    vector<int>v(10, 0); // first: size, sec: init value to every element

    for(auto it:v)
    {
        cout << it << '\n';
    }
    cout << v.size() << ' ' << v.front() << ' ' << v.back() << '\n';
    return 0;
}