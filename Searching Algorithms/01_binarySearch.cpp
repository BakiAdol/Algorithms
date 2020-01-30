bool binarySearch(int key,int sizeOfarray, int _array[]){
    int left=0,right=sizeOfarray-1,mid;
    while(left<=right){
        //mid = (left+right) >> 1;
        mid = left + (right-left)/2;
        if(key==_array[mid]) return true;
        if(key>_array[mid]) left=mid+1;
        else right=mid-1;
    }
    return false;
}
