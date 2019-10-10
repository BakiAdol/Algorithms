/// vector sort descending order

#include <bits/stdc++.h>

using namespace std;

bool desc(int a, int b)
{
    return a > b;
}

int main()
{
    vector<int> v;
    vector<int>::iterator it;

    v.push_back(5);
    v.push_back(1);
    v.push_back(9);
    v.push_back(6);
    v.push_back(3);

    //sort(v.begin(),v.end()); // ascending order sort
    sort(v.begin(),v.end(),desc); // descending order sort

    for(it=v.begin();it!=v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
/-------------------------------------------------------------------


/// Sort struct vector    
    
#include <bits/stdc++.h>

using namespace std;

struct ranking
{
    int id;
    int rating;
};

bool cmp(ranking a, ranking b)
{
    if(a.rating>b.rating) return true;
    else if(a.rating==b.rating)
    {
        if(a.id<b.id) return true;
        return false;
    }
    return false;
}

int main()
{
    vector<ranking> problemSolver;
    vector<ranking>::iterator it;
    ranking r;
    r.id=5, r.rating=50;
    problemSolver.push_back(r);
    r.id=2, r.rating=60;
    problemSolver.push_back(r);
    r.id=3, r.rating=50;
    problemSolver.push_back(r);
    r.id=4, r.rating=60;
    problemSolver.push_back(r);
    r.id=1, r.rating=50;
    problemSolver.push_back(r);

    sort(problemSolver.begin(), problemSolver.end(),cmp);

    for(it=problemSolver.begin(); it!=problemSolver.end();it++)
    {
        cout << "ID : " << (*it).id  << ", Rating : " << (*it).rating << endl;
    }

    return 0;
}

