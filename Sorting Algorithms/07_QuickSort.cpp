// time complexity O(n*n)

int Partition(int arr[], int l, int r)
{
    int pivot = l;
    int smaller = 0;
    for(int i=pivot+1;i<=r;i++)
    {
        if(arr[pivot]>arr[i]) smaller++;
    }
    pivot += smaller;
    swap(arr[l], arr[pivot]);
    
    while(l<pivot and pivot<r)
    {
        if(arr[l]<arr[pivot]) l++;
        else if(arr[r]>arr[pivot]) r--;
        else swap(arr[l++], arr[r--]);
    }
    return pivot;
}

void QuickSort(int arr[], int l, int r)
{
    if(l>=r) return;
    int m = Partition(arr,l,r);
    QuickSort(arr,l,m-1);
    QuickSort(arr,m+1,r);
}
