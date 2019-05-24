void mergeS(int arr[], int first, int middle, int last){
    int tmpArray[last-first];
    int i=first,j=middle+1,k=-1;
    while(i<=middle && j<=last){
        if(arr[i]<arr[j]) tmpArray[++k]=arr[i++];
        else tmpArray[++k]=arr[j++];
    }
    while(i<=middle) tmpArray[++k]=arr[i++];
    while(j<=last) tmpArray[++k]=arr[j++];
    first--;
    for(int i=0;i<=k;i++) arr[++first]=tmpArray[i];
}
void mergeSort(int arr[], int first, int last){/// first=0 and last = arr[] last index number
    if(first<last){
        int middle = (first+last)/2;
        mergeSort(arr,first,middle);
        mergeSort(arr,middle+1,last);
        mergeS(arr,first,middle,last);
    }
}
