#include <bits/stdc++.h>

using namespace std;
#define ll long long 

struct person
{
    string name;
    int a, m, s, e;

    int total() const { return a + m + s + e; }

    // bool operator<(const person &other) const
    // { 
    //     if (total() == other.total()) return name < other.name; // Sort by name if total is the same
    //     return total() > other.total(); // Higher total first
    // }

    
};

bool compare(const person &a, const person &b)  
{
    if (a.total() == b.total()) return a.name < b.name; // Sort by name if total is the same
        return a.total() > b.total(); // Higher total first
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin >> n;

    person frien[n];

    for(int i = 0;i < n; i++)
    {
        cin >> frien[i].name >> frien[i].a >> frien[i].m >> frien[i].s >> frien[i].e;
    }

    // sort(frien, frien+n);
    sort(frien, frien+n, compare);

    for (int i = 0; i < n; i++)  
    {
        cout << frien[i].name << ' ' << frien[i].total() << ' ' << frien[i].a << ' ' << frien[i].m << ' ' << frien[i].s << ' ' << frien[i].e << '\n';
    }

    return 0;
}