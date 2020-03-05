// Asceding order using slection sort
#include <stdio.h>


//Swap the integer fuction 
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// Function to perform Selection Sort
void selectionSort( int arr[], int n)
{
	int i,j, min_idx;

	// One by one move boundary of unsorted subarray 
	for (i=0; i < n-1 ; i++) {

	// Find the minimum element in unsorted array 
	min_idx = i;
	for(j= i + 1; j <n; j++){
		if(arr[j] < arr[min_idx]){
			min_idx = j;
		}
	}
	// Swap the found min element with first element 
	swap( &arr[min_idx], &arr[i]);

	}
}

//Function to print an array 
void printArray(int arr[], int size)
{
	int i;
	for( i=0; i<size ; i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}


// Given array 
// Driver code 
// Main Function 
int main()
{
	int arr[] = {0, 23, 14, 12, 9};
	int n = sizeof(arr) / sizeof(arr[0]); // n = 5/1 = 5 
	printf("Original array:\n");
	printArray(arr,n); //Function to print array

	selectionSort(arr, n); // Function to perform Selection Sort 
	printf("Sorted array in Ascending order: \n");
	printArray(arr,n); 

	return 0;

} 
