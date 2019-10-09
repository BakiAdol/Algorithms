///Complexity O(n*n)

void selectionSort(int arr[], int sizeOfArray){
    int indexOfSmallest;
    for(int i=0;i<sizeOfArray-1;i++){
        indexOfSmallest=i;
        for(int j=i+1;j<sizeOfArray;j++)
            if(arr[indexOfSmallest]>arr[j])
                indexOfSmallest=j;
        swap(arr[i],arr[indexOfSmallest]);
    }
}
