#include<bits/stdc++.h>

using namespace std;
#define ll long long 

struct person
{
    private:
        
        
    public:
        string name;
        int salary;

    bool operator<(const person &other) const
    { 
        if(salary == other.salary) return name < other.name;
        return salary > other.salary;
    }
};

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin >> n;

    person frien[n];

    for(int i = 0;i < n; i++)
    {
        cin >> frien[i].name >> frien[i].salary;
    }

    sort(frien, frien+n);

    for(auto [name, salary]:frien)
    {
        cout << name << ' ' << salary << '\n';
    }

    return 0;
}