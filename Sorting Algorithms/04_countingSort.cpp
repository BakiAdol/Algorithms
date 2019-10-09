///Complexity O(N+n)

#include <bits/stdc++.h>

using namespace std;

void countSort(int arr[], int n)
{
    int countNumber[10];
    int res[n];
    memset(countNumber,0,sizeof(countNumber));
    memset(res,-1,sizeof(res));
    for(int i=0;i<n;i++)
    {
        countNumber[arr[i]]++;
    }
    for(int i=1;i<10;i++)
    {
        countNumber[i]+=countNumber[i-1];
    }
    for(int i=0;i<n;i++)
    {
        res[countNumber[arr[i]]]=arr[i];
        countNumber[arr[i]]--;
    }

    for(int i=0, indx=-1;i<n;i++)
    {
        if(res[i]>-1) arr[++indx]=res[i];
    }
}

int main()
{
    int n=15;
    int arr[]={5,9,7,3,8,9,1,2,0,4,6,8,3,2,9};
    countSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

