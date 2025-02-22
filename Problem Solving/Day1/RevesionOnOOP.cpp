#include<bits/stdc++.h>

using namespace std;
#define ll long long 

struct student
{
    private:
        bool graduated;
        
    public:
        string name;
        int age;
        float gpa;
    
    student()
    {}

    student(string x, int y, float z):name(x), age(y), gpa(z), graduated(0){}

    bool operator<(const student &other) const
    {
        return age < other.age;
    }
};

bool compare(const int &a, const int &b)  
{
    return abs(a) < abs(b);
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    // student stud, student("Abdullah", 24, 3.1);
    // cout << student.name << "  " << student.age << "  " << student.gpa << '\n';

    // student stud[5];
    // stud[0] = student("Abdullah", 45, 3.1);
    // stud[1] = student("Ahmed", 22, 3.1);
    // stud[2] = student("Ali", 46, 3.1);
    // stud[3] = student("Salah", 21, 3.1);
    // stud[4] = student("Mohamed", 33, 3.1);

    // sort(stud, stud+5);

    // for(auto it:stud)
    // {
    //     cout << it.name << '\n';
    // }

    int n;
    cin >> n;
    
    int s[n];
    for (int i = 0; i < n; i++) cin >> s[i];

    // sort(s, s + n, greater<int>());
    sort(s, s + n, compare);

    for (int i = 0; i < n; i++) cout << s[i] << '\n'; 

    return 0;
}