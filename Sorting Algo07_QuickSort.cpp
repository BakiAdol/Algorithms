// time complexity n*n

int Partition(int arr[], int l, int r)
{
    int i=l; 
    int small=l;
    while(i<=r)
    {
        if(arr[i]<arr[r])
        {
            swap(arr[small],arr[i]);
            small++;
        }
        i++;
    }
    swap(arr[small],arr[r]);
    return small;
}

void QuickSort(int arr[], int l, int r)
{
    if(l>=r) return;
    int m = Partition(arr,l,r);
    QuickSort(arr,l,m-1);
    QuickSort(arr,m+1,r);
}
