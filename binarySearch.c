#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; // (r + l) may exceed the int limit, thats why its l + (r - l) 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) // if the middle element is greater than we are looking for ( we must search left next )
            return binarySearch(arr, l, mid - 1, x); 
        return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
}  
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 10; 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? printf("The element is not present in array") 
                   : printf("The element is present at index %d", 
                            result); 
    printf("\n");
    return 0; 
}
