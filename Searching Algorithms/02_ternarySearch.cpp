//Complexity O(log 3 n)

int ternarySearch(int arr[], int first, int last, int key)
{
    int mid1,mid2;
    while(first<=last)
    {
        mid1 = first + (last-first)/3;
        mid2 = last - (last-first)/3;

        if(key==arr[mid1]) return mid1;
        else if(key==arr[mid2]) return mid2;

        if(key<arr[mid1]) return ternarySearch(arr,first,mid1-1,key);
        else if(key>arr[mid2]) return ternarySearch(arr,mid2+1,last,key);
        else return ternarySearch(arr,mid1+1,mid2-1,key);
    }
    return -1;
}
