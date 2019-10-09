//Complexity O(n*n)

void bubbleSort(int arr[], int sizeOfArray)
{
    bool s;
    for(int i=0;i<sizeOfArray-1;i++)
    {
        s=false;
        for(int j=0;j+1<sizeOfArray-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                s=true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!s) return;
    }
}
