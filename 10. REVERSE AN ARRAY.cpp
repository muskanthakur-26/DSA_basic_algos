//Function to reverse arr[] from start to end

void rvereseArray(int arr[], int start, int end)
{
    if (start >= end)
    return;
     
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    rvereseArray(arr, start + 1, end - 1);
}    
 