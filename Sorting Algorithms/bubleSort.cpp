void bubbleSort(int arr[], int sizeOfArray){
    for(int i=0;i<sizeOfArray-1;i++){
        for(int j=0;j+1<sizeOfArray-i;j++)
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
    }
}
