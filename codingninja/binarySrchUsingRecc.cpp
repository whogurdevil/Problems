int srch(int arr[], int s, int e, int val){
    if(s > e){
        return -1;
    }
    
    int mid = s + (e-s)/2;

    if(arr[mid] == val){
        return mid;
    }

    if(arr[mid] < val){
        return srch(arr, mid + 1, e, val);
    }

    if(arr[mid] > val){
        return srch(arr, s, mid - 1, val);
    }
    return -1;
}
int binarySearch(int *input, int n, int val)
{
    return srch(input, 0, n-1, val);
    
}   