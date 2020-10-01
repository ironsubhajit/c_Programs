#include <stdio.h>

// A iterative binary search function to search key in arr[low...high]
int binarySearchIter(int arr[], int l, int h, int k) {
while (l <= h) {
int m = (l+h)/2;

if (arr[m] == k) // if key is present at the middle, return mid
return m;
if (arr[m] < k) // If key greater than mid element, ignore left half
l = m + 1;
else // If key is smaller than mid element, ignore right half
h = m - 1;
}
return -1; // return -1 if element not found.
}

// A recursive binary search function to search key in arr[low...high]

int binarySearchRec(int arr[], int l, int h, int k) {
if (h >= l) {
int mid = (l+h)/2;

if (arr[mid] == k) // if key is present at the middle, return mid
return mid;
if (arr[mid] > k) // If element is smaller than middle, then check the left subarray
return binarySearchRec(arr, l, mid-1, k);
// Else check the right subarray
return binarySearchRec(arr, mid+1, h, k);
}
return -1; // return -1 if element not found.
}

/* main function() */
int main(){

int size,k,i;

printf("\nEnter no of elements: ");
scanf("%d",&size);

int arr[size];

printf("Enter array elements:");
for(i=0;i<size;i++)
scanf("%d",&arr[i]);

printf("\nEnter the element you want to search : ");
scanf("%d",&k);

/* call any one of the following function by removing the comment */

// int index = recLinearSearch(arr, 0, size-1, k);
// int index = recLinearSearch2(arr, size-1, k);
int index = binarySearchRec(arr, 0, size-1, k);
if (index != -1)
printf("Element %d is present at index %d", k, index);
else
printf("Element %d is not present", k);
return 0;
}