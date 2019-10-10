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
