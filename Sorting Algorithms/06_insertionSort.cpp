///Complexity O(n*n)

void insertonSort(int arr[], int sizeOfArray){
    
    for(int i=1;i<sizeOfArray;i++)
    {
        int pos=i;
        while(pos>0)
        {
            if(arr[pos]<arr[pos-1]) swap(arr[pos],arr[pos-1]);
            else break;
            pos--;
        } 
    }

    for(int i=0;i<sizeOfArray;i++)
    {
        cout << arr[i] << " ";
    }
}
