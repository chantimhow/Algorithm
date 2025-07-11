#include <iostream>
#include <iomanip>

#define SIZE 10

void bubbleAscSort( int [], const int size ); /* prototype */
void bubbleDesSort( int [], const int size );

using namespace std; 



int main()
{
   /* initialize array a */
   int arr[SIZE], arr2[SIZE];
   int i; /* counter */

   cout << "Please enter 10 integers:\n";

	for(i = 0; i < SIZE; i++){
		cin >> arr[i];
		arr2[i] = arr[i];
		
	}

	cout << "\n\nBefore sorting in ascending:\n\nThe first original array:\n";
	for(i = 0; i < SIZE; i++){
		cout << setw(5) << arr[i];
	}

	cout << "\n\nBefore sorting in descending:\n\nThe second original array:\n";
	for(i = 0; i < SIZE; i++){
		cout << setw(5) << arr2[i];
	}

		bubbleAscSort(arr, SIZE);
		bubbleDesSort(arr2, SIZE);
	
	cout << "\n\nAfter sorting in ascending:\n\nThe first original array:\n";
	for(i = 0; i < SIZE; i++){
		cout << setw(5) << arr[i];
	}

	cout << "\n\nAfter sorting in descending:\n\nThe second original array:\n";
	for(i = 0; i < SIZE; i++){
		cout << setw(5) << arr2[i];
	}
	
	cout << endl;

	system("pause");

  
   return 0; 

} 


/* sort an array of integers using bubble sort algorithm */
void bubbleAscSort( int arr[], const int size )
{
   int pass; /* pass counter */
   int j;    /* comparison counter */
   int hold;
   
   /* loop to control passes */
   for ( pass = 0; pass < size - 1; pass++ ) {

      /* loop to control comparisons during each pass */
      for ( j = 0; j < size - 1; j++ ) {

         /* swap adjacent elements if they are out of order */
         if (arr[j] > arr[j+1]) {
			 hold = arr[j];
			 arr[j] = arr[j+1];
			 arr[j+1] = hold;
            
         } 

      }

   } 

} 


/* sort an array of integers using bubble sort algorithm */
void bubbleDesSort( int arr[], const int size )
{
   int pass; /* pass counter */
   int j;    /* comparison counter */
   int hold;
   
   /* loop to control passes */
   for ( pass = 0; pass < size - 1; pass++ ) {

      /* loop to control comparisons during each pass */
      for ( j = 0; j < size - 1; j++ ) {

         /* swap adjacent elements if they are out of order */
         if (arr[j] < arr[j+1]) {
			 hold = arr[j];
			 arr[j] = arr[j+1];
			 arr[j+1] = hold;
            
         } 

      }

   } 

} 

